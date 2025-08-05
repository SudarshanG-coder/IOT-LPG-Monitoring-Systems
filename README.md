# 🔥 IoT-Enabled LPG Leak Monitoring & Alert System

* An end-to-end smart surveillance system designed to detect **LPG gas leaks** and instantly alert users through **GSM-based SMS**, while monitoring live data through a **Firebase dashboard**.

* Built using **NodeMCU**, **MQ2 Gas Sensor**, and **GSM Module**, this system is ideal for homes, restaurants, and industrial kitchens where gas safety is critical.

---

## 🎯 Achievements

- 🏅 Recognized by **Karnataka State Council for Science and Technology (KSCST)**
- 📃 Paper presented at an IEEE-sponsored conference – [Download Paper](./documentation/ieee-paper.pdf)
- 🔐 Designed for real-world LPG safety and smart alerting
  
---

## 📷 System Overview

This project presents a smart IoT-based system that improves **household LPG safety** by combining real-time monitoring, fire/leak detection, and automation. The device:

- **Detects LPG gas leakage** and fire using MQ-6 & flame sensors  
- **Monitors gas levels** via load cell and HX711  
- **Auto-books a cylinder refill** when the gas falls below 20%  
- **Sends real-time SMS alerts** using GSM SIM800L  
- **Displays status** on a 16x2 LCD and a web dashboard (ThingSpeak)

> 💡 Designed for domestic safety, smart kitchens, restaurants, and industrial gas monitoring.

---

## 🚀 Key Features

- 🔍 Real-time LPG leak detection using **MQ2 Gas Sensor**
- 📲 Immediate SMS alerts via **SIM800L GSM Module**
- ☁️ Live gas concentration data uploaded to **Firebase**
- 📊 Cloud dashboard for remote monitoring
- ⚠️ Visual + audio alerts on threshold breach
- 💾 Data logging for further analysis
  
---

## 🏗️ System Architecture

- Microcontroller: Arduino UNO
- Sensors: MQ6 (Gas), Flame, Load Cell
- Alerts: Buzzer, LCD, GSM SMS
- Optional: ThingSpeak IoT Dashboard

🖼️ *Block Diagram and Circuit Schematic:*  
     See `hardware/` folder for diagrams and PCB layout images.

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

---

## 🧑‍💻 My Contributions

- Designed the hardware layout & sensor integration
- Programmed leak detection logic with Arduino
- Integrated GSM for alert messaging
- Created Firebase dashboard for real-time monitoring
- Wrote the final report and presented at IEEE conference 

---

## 🔗 Resources

* 📘 [Final Report](./documentation/final-report.pdf)
* 📑 [IEEE Paper](./documentation/ieee-paper.pdf)  
* 🏆 [KSCST Recognition Letter](documentation/KSCST_Recognition_Letter.pdf.pdf)

---

## 📬 Contact Me

* 💼 [LinkedIn](https://www.linkedin.com/in/sudarshan-g-ai/)
* 🔗 [Portfolio](https://sudarshang-portfoilo.netlify.app/)
* 📧 [Email](mailto:gsudarshan925@gmail.com)

