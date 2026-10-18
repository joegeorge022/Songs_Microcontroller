#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "animation.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void playGIF(const AnimatedGIF* gif) {
  // Change loop variable to uint16_t to handle >255 frames
  for (uint16_t frame = 0; frame < gif->frame_count; frame++) {
    display.clearDisplay();

    for (uint16_t y = 0; y < gif->height; y++) {
      for (uint16_t x = 0; x < gif->width; x++) {
        uint16_t byteIndex = y * ((gif->width + 7) / 8) + (x / 8);
        uint8_t bitIndex = 7 - (x % 8);

        uint8_t b = pgm_read_byte(&(gif->frames[frame][byteIndex]));

        if (b & (1 << bitIndex)) {
          display.drawPixel(x, y, SSD1306_WHITE);
        }
      }
    }

    display.display();
    delay(gif->delays[frame]);
  }
}

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
}

void loop() {
  playGIF(&Radhima_gif);
}