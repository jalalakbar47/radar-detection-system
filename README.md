# 📡 Radar Detection System using Arduino 🚨🛠️

This project simulates a radar system using an Arduino UNO, ultrasonic sensor (HC-SR04), and a servo motor. The sensor sweeps across an arc to detect objects at various angles and distances — just like a mini radar!

---

## 🧰 Components Used

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

![Radar Circuit using Arduino UNO, HC-SR04, and Servo](docs/radar_diagram.png)

---

## ⚙️ Working Principle

The servo rotates from 0° to 180° while the ultrasonic sensor measures distances at each angle. Data is sent to the serial monitor, simulating a basic radar scanner.

---

## 🧪 How to Run

1. Open `src/radar_detection.ino` in the Arduino IDE.
2. Wire the components as shown in the diagram.
3. Select the correct board (Arduino UNO) and COM port.
4. Upload the code to the board.
5. Open the Serial Monitor at `9600 baud` to view the output.
---

## 📦 Dependencies

- Arduino IDE  
- Servo library (built-in)  
- Ultrasonic sensor (no special library needed)

---

## 👨‍💻 Author

**Jalaluddin Khan**  
BSCS Student, Pakistan 🇵🇰  
GitHub: [@jalaluddin-fire](https://github.com/jalaluddin-fire)

---

## 📄 License

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.
