#include <LiquidCrystal.h>
#include <HX711.h>
#include <SoftwareSerial.h>

// Pins
#define flamePin A1
#define gasPin A0
#define buzzer 8
#define DOUT  3
#define CLK  2

// LCD: rs, en, d4, d5, d6, d7
LiquidCrystal lcd(9, 10, 4, 5, 6, 7);
HX711 scale;
SoftwareSerial gsm(11, 12); // RX, TX for GSM

// Thresholds
float weightThreshold = 2.0; // Adjust based on empty cylinder
int gasThreshold = 400;      // Depends on MQ6 calibration
int fireThreshold = 300;     // Adjust per sensor

void setup() {
  Serial.begin(9600);
  gsm.begin(9600);
  lcd.begin(16, 2);

  pinMode(flamePin, INPUT);
  pinMode(gasPin, INPUT);
  pinMode(buzzer, OUTPUT);

  scale.begin(DOUT, CLK);
  lcd.print("LPG Monitor Ready");
  delay(2000);
}

void loop() {
  float weight = scale.get_units();
  int gasLevel = analogRead(gasPin);
  int flame = analogRead(flamePin);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Weight: ");
  lcd.print(weight, 1);
  lcd.print("kg");

  lcd.setCursor(0, 1);
  if (weight < weightThreshold) {
    lcd.print("Low Gas! SMS Sent");
    sendSMS("Low LPG detected. Refill booked!");
  } else {
    lcd.print("Gas Level OK");
  }

  if (gasLevel > gasThreshold) {
    tone(buzzer, 1000);
    sendSMS("⚠️ Gas leakage detected!");
  }

  if (flame > fireThreshold) {
    tone(buzzer, 2000);
    sendSMS("🔥 Fire detected near LPG!");
  }

  delay(3000);
  noTone(buzzer);
}

void sendSMS(String message) {
  gsm.println("AT+CMGF=1");
  delay(1000);
  gsm.println("AT+CMGS=\"+91xxxxxxxxxx\""); // Replace with your number
  delay(1000);
  gsm.print(message);
  delay(100);
  gsm.write(26); // ASCII for Ctrl+Z to send SMS
}
