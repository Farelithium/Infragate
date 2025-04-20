# 🚗 AutoGate - Infrared-Based Automatic Gate System

**AutoGate** is a simple microcontroller project using **Arduino** and an **infrared sensor** to detect vehicles and control a **servo motor** as an automated gate arm.

---

## 🧠 Concept Overview

When a vehicle is detected by the infrared sensor, the servo motor lifts the gate arm automatically. After a short delay, the gate closes back to its default position.

---

## 🔧 Components Used

| Component        | Quantity | Description                            |
|------------------|----------|----------------------------------------|
| Arduino UNO      | 1x       | Main microcontroller                   |
| Infrared Sensor  | 1x       | Detects the presence of a vehicle      |
| Servo Motor      | 1x       | Acts as the automatic gate barrier     |
| Breadboard       | 1x       | For assembling the circuit             |
| Jumper Wires     | As needed| For connections between components     |

---

## ⚙️ Assembly Steps

1. **Connect the Infrared Sensor**
   - VCC → 5V on Arduino  
   - GND → GND on Arduino  
   - OUT → Digital Pin (e.g., pin 5)

2. **Connect the Servo Motor**
   - Red wire (VCC) → 5V on Arduino  
   - Brown/Black wire (GND) → GND on Arduino  
   - Yellow/Orange wire (Signal) → PWM Pin (e.g., pin 3)

3. **Upload the Code**
   - Use Arduino IDE  
   - Connect the Arduino to your computer via USB  
   - Upload the appropriate code (excluded from this file)

4. **Testing**
   - Place an object in front of the IR sensor  
   - Servo should rotate (e.g., 90°) to open the gate  
   - After a short delay, it will rotate back to close

---

## 🧪 Extra Tips

- Use **external power** for the servo if it lacks torque from Arduino 5V.
- Adjust the servo rotation angle to fit your gate design.
- Secure the IR sensor and servo on a stable base for reliable operation.
- You can add LED indicators to show gate status (open/closed).

---

## 📸 Documentation

Include photos or videos of your assembled project and testing results in the `docs/` folder or within this repository.

---