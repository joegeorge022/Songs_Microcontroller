# Songs OLED Microcontrollers

A collection of Arduino and ESP32-based OLED animation projects that display animated graphics and visual effects on a small monochrome SSD1306 display.

This repository contains several sketches designed for low-cost, DIY electronics projects using microcontrollers and OLED screens. The main project demonstrates a frame-based animation playback system using an SSD1306 display and a generated animation header file.

## Features
- ESP32 / Arduino-compatible microcontroller support
- SSD1306 128x64 OLED display output
- Frame-based animated graphics
- Simple, lightweight display loop suitable for embedded projects
- Multiple animation sketches included

## Repository Structure

```text
Songs_OLED_Microcontrollers/
├── Radhima/
│   ├── animation.h      # Animation frame data
│   └── radhima.ino     # Main project sketch
├── pesamale_oledanimation.ino
├── rathinamo_oledanimation.ino
└── README.md
```

## Hardware Requirements
- ESP32 or Arduino board
- 0.96 inch SSD1306 OLED display (128x64)
- Jumper wires
- Breadboard (optional)
- 5V or 3.3V power source depending on your display and board setup

## Wiring
Typical OLED wiring for an ESP32:

- VCC -> 3.3V or 5V (check your display module)
- GND -> GND
- SDA -> GPIO21
- SCL -> GPIO22

For Arduino boards, check the corresponding I2C pins (commonly A4 = SDA and A5 = SCL on Uno/Nano).

## Required Libraries
Install these libraries in the Arduino IDE or PlatformIO:

- Adafruit GFX Library
- Adafruit SSD1306 Library
- Wire (included with Arduino core)

## How to Run
1. Install the Arduino IDE.
2. Install the required libraries.
3. Open the `.ino` file you want to run.
4. Select your board (ESP32 or Arduino).
5. Select the correct COM port.
6. Upload the sketch.
7. Power the board and observe the OLED animation.

## Example Sketch
The main project (`Radhima/radhima.ino`) includes the following flow:

- Initialize the OLED display
- Load animation data from `animation.h`
- Iterate through each frame
- Draw pixels to the display
- Delay between frames to create motion

## Notes
- The animation data is stored in `animation.h` as a generated bitmap sequence.
- The display uses a monochrome 128x64 format and updates continuously in a loop.
- This repository is ideal for makers, hobbyists, and embedded systems learners exploring OLED graphics and microcontroller animation.

## License
This project does not appear to include a license file. If you plan to reuse or redistribute this code, check the repository owner’s licensing terms before publishing or commercializing it.

## Credits
[Agilesh.A](https://www.instagram.com/_agixx_.01?stkn=MW9hb3BrejJqZ3A2Mw==)

---

If you want, I can also generate a more polished version with:
- a project banner
- installation instructions for PlatformIO
- a circuit diagram section
- a shorter “quick start” README for GitHub
- a more professional README for public release