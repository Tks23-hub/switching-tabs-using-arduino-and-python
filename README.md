# Motion-Controlled Tab Switcher (Arduino + Python)

This is a simple project that combines **Arduino** and **Python** to control your computer using an **ultrasonic motion sensor**. When the sensor detects motion within a certain range, it triggers a Python script to switch between tabs using keyboard shortcuts like `Alt + Tab` or `Ctrl + Tab`.
---
## 📦 Project Structure
```
motion-controlled-tab-switcher/
├── arduino_code/
│ └── arduino_code.ino
├── python_ultrasonicsensor/
│ ├── arduino_alt_tab.py
│ └── arduino_ctrl_tab.py
└── README.md
```
---

## ⚙️ How It Works

1. The Arduino uses an **HC-SR04 ultrasonic sensor** to detect motion within a 1–100 cm range.
2. When motion is detected, it sends the message `"Motion detected!"` to the serial port.
3. A Python script running on your computer listens to this serial message.
4. Once the message is received, the Python script simulates a keyboard shortcut to switch between tabs.

- `arduino_alt_tab.py` → triggers `Alt + Tab` (switch apps)
- `arduino_ctrl_tab.py` → triggers `Ctrl + Tab` (switch browser tabs)

---

## 🧰 Requirements

### Arduino:
- Arduino board (Uno/Nano/etc.)
- HC-SR04 ultrasonic sensor
- Jumper wires

### Python:
- Python 3.x
- `pyautogui` library (`pip install pyautogui`)
- `pyserial` library (`pip install pyserial`)

---

## 🔌 Setup Instructions

### 1. Arduino Setup
- Connect your HC-SR04 sensor to the Arduino:
  - **Trig** → Pin 12
  - **Echo** → Pin 11
- Upload the `arduino_code.ino` file to your Arduino board.

### 2. Python Script
- Make sure the COM port (`COM4` in the scripts) matches the port of your connected Arduino.
- Open your terminal and run one of the Python scripts:

```bash
python python_ultrasonicsensor/arduino_alt_tab.py
# or
python python_ultrasonicsensor/arduino_ctrl_tab.py
```

## 👨‍💻 Author

**Mohamed Soliman**  
Created as a fun mini project to explore Arduino and Python interaction.

