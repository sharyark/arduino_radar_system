# arduino_radar_system
# 🚀 Radar-Based Distance Visualization System

A real-time radar simulation using Arduino, Ultrasonic Sensor, and Python + OpenCV to visualize distances detected in a sweeping 180° range.

---

## 📝 Table of Contents

- [Overview](#overview)
- [Hardware Requirements](#hardware-requirements)
- [Circuit Diagram](#circuit-diagram)
- [Software Requirements](#software-requirements)
- [Arduino Code](#arduino-code)
- [Python Code](#python-code)
- [How to Run](#how-to-run)
- [Screenshot](#screenshot)
- [Troubleshooting](#troubleshooting)

---

## 📦 Overview

This project uses a servo-mounted ultrasonic sensor to scan surroundings by sweeping from 0° to 180° and back. It sends angle-distance pairs over serial to a Python script that visualizes it in a radar-style interface using OpenCV.

---

## 🧰 Hardware Requirements

- Arduino Uno (or compatible)
- HC-SR04 Ultrasonic Distance Sensor
- Servo Motor (e.g., SG90)
- Jumper Wires
- Breadboard (optional)
- USB Cable

---

## 🔌 Circuit Diagram

- **Ultrasonic Sensor (HC-SR04)**  
  - VCC → 5V  
  - GND → GND  
  - TRIG → D4  
  - ECHO → D3  

- **Servo Motor**  
  - VCC → 5V  
  - GND → GND  
  - SIGNAL → D9  

---

## 🧪 Software Requirements

- Arduino IDE
- Python 3.x
- Libraries:
  - OpenCV
  - NumPy
  - PySerial

Install required Python packages:
```bash
pip install opencv-python numpy pyserial
