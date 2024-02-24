#ifndef RERREDISPLAY169_H
#define RERREDISPLAY169_H

#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>
#include <Fonts/FreeSerifBoldItalic24pt7b.h>

class RerreDisplay169 {
public:
  RerreDisplay169();

  void begin();
  void clearScreen();
  void setTextFont(const GFXfont* font);
  void setFont(const GFXfont* font);
  void writeInMiddle(String text, uint16_t color, int fontHeight);
  void setCursor(int16_t x, int16_t y);
  void setCustomFont(const GFXfont* customFont); // Novo método

private:
  Adafruit_ST7789 tft;
  static const int TFT_CS = SPICS;
  static const int TFT_RST = SPIRES;
  static const int TFT_DC = 2;
};

#endif
