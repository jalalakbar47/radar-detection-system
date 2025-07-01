# 🛰️ Arduino Radar Detection System with Ultrasonic Sensor and Servo Motor

## 📌 Project Overview

This is a mini radar system built with Arduino UNO that uses an ultrasonic sensor to scan the environment across a 180° arc using a servo motor. The system detects objects and displays their distance on the Serial Monitor — a great way to simulate radar-like behavior!

---

## 📑 Table of Contents
- [Project Overview](#project-overview)
- [Components Used](#components-used)
- [Circuit Diagram](#circuit-diagram)
- [Working Principle](#working-principle)
- [How to Run](#how-to-run)
- [Demo](#-demo)
- [Features](#features)
- [Dependencies](#dependencies)
- [Author](#author)
- [License](#license)

---

## 🧩 Components Used

| Component                | Quantity |
|--------------------------|----------|
| Arduino UNO              | 1        |
| Ultrasonic Sensor (HC-SR04) | 1     |
| Servo Motor (SG90)       | 1        |
| Breadboard               | 1        |
| Jumper Wires             | 10+      |
| USB Cable                | 1        |

---

## 🛠️ Circuit Diagram

<img src="docs/radar_demo.gif" alt="Radar Detection Demo" width="500"/>

---

## 🧠 Working Principle

The servo rotates from 0° to 180° while the ultrasonic sensor measures distances at each angle. Data is sent to the serial monitor, simulating a basic radar scanner.

---

## 🎥 Demo

Here's a live demonstration of the radar detection system in action:

![Radar Demo](docs/radar_detection_demo.gif)


---

## 🧪 How to Run

1. Clone this repository:
   ```bash
   git clone https://github.com/jalalakbar47/radar-detection-system.git

2. Open src/radar_detection.ino in the Arduino IDE.


3. Connect your components as shown in the circuit diagram.


4. Select your board and port from Tools > Board and Port.


5. Upload the code and open the Serial Monitor at 9600 baud.


---

🚀 Features

1. Rotating servo motor from 0° to 180°

2. Distance scanning using ultrasonic sensor

3. Real-time radar simulation

4. Serial monitor output for object detection


---

📦 Dependencies

Arduino IDE

Servo library (built-in)

Ultrasonic sensor (no additional library required)

---

👨‍💻 Author

Jalaluddin Khan
BSCS Student, Pakistan 🇵🇰
GitHub: @jalaluddin-fire


---

📄 License

This project is licensed under the MIT License – see the LICENSE file for details.

---
