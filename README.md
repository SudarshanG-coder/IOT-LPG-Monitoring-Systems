# 🔥 IoT Enabled Surveillance & Alerting System for LPG Containers

> 🛡️ Final Year Capstone Project (2023–2024)  
> 🏆 Recognized at **KSCST Project Exhibition 2024**  
> 📃 Published in IEEE Conference – [Download Paper](./documentation/ieee-paper.pdf)

---

## 📌 Overview

This project presents a smart IoT-based system that improves **household LPG safety** by combining real-time monitoring, fire/leak detection, and automation. The device:

- **Detects LPG gas leakage** and fire using MQ-6 & flame sensors  
- **Monitors gas levels** via load cell and HX711  
- **Auto-books a cylinder refill** when the gas falls below 20%  
- **Sends real-time SMS alerts** using GSM SIM800L  
- **Displays status** on a 16x2 LCD and a web dashboard (ThingSpeak)

> 💡 Designed for domestic safety, smart kitchens, restaurants, and industrial gas monitoring.

---

## 🧠 Key Technologies Used

- Arduino UNO R3  
- NodeMCU ESP8266 (for cloud/web dashboard)  
- GSM SIM800L Module  
- Load Cell with HX711 Amplifier  
- MQ-6 Gas Sensor & Flame Sensor  
- 16x2 LCD Display  
- Buzzer & Servo Motor  
- Arduino IDE + KiCad

---

## 🏗️ System Architecture

- Microcontroller: Arduino UNO
- Sensors: MQ6 (Gas), Flame, Load Cell
- Alerts: Buzzer, LCD, GSM SMS
- Optional: ThingSpeak IoT Dashboard

🖼️ *Block Diagram and Circuit Schematic:*  
See `hardware/` folder for diagrams and PCB layout images.

---

## 🎯 Achievements

- 🏅 Recognized by **Karnataka State Council for Science and Technology (KSCST)**
- 📃 Paper presented at an IEEE-sponsored conference  
- 🔐 Designed for real-world LPG safety and smart alerting

---

## 🚀 Features

- ✅ **Automatic Gas Booking** based on cylinder weight
- 🔥 **Fire and Leak Detection** via sensors
- 📱 **GSM-Based SMS Alerts** to user and agency
- 📊 **Real-time Data Display** on LCD and cloud dashboard
- 🔋 **Low-Power Embedded Design**

---

## 🧪 How It Works

1. Load cell constantly measures the LPG weight
2. If gas < 20% → SMS alert + automatic refill request
3. MQ6 detects gas leakage → triggers buzzer, LCD warning, SMS
4. Flame sensor detects fire → activates alert system
5. Real-time values displayed on LCD and updated to ThingSpeak

## 👨‍💻 Team

| Name                   | Email                                                             |
| ---------------------  | ----------------------------------------------------------------- |
| Team Lead: Sudarshan G | [gsudarshan925@gmail.com](mailto:gsudarshan925@gmail.com)         |
| Shreyas S R            | [shreyasreddyssr15@gmail.com](mailto:shreyasreddyssr15@gmail.com) |
| S Upendra              | [lukkyupendra2002@gmail.com](mailto:lukkyupendra2002@gmail.com)   |
| Guide: Dr. S Bhargavi  | [bhargavi@sjcit.ac.in](mailto:bhargavi@sjcit.ac.in)               |

---

## 🔗 Resources


* 📘 [Final Report](./documentation/final-report.pdf)
* 📑 [IEEE Paper](./documentation/ieee-paper.pdf)  
* 🏆 [KSCST Recognition Letter](./documentation/KSCST_Recognition_Letter.pdf)

---

## 📬 Contact Me

* 💼 [LinkedIn](https://linkedin.com/in/YOUR-LINK-HERE)
* 📧 [gsudarshan925@gmail.com](mailto:gsudarshan925@gmail.com)

