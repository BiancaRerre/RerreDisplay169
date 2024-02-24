#include "rerreDisplay169.h"

RerreDisplay169::RerreDisplay169() : tft(TFT_CS, TFT_DC, TFT_RST) {}

void RerreDisplay169::begin() {
  tft.init(240, 280);
  tft.setRotation(1);
}

void RerreDisplay169::clearScreen() {
  tft.fillRect(0, 0, 280, 240, ST77XX_BLACK);
}

void RerreDisplay169::setTextFont(const GFXfont* font) {
  tft.setFont(font);
}

void RerreDisplay169::setFont(const GFXfont* font) {
  tft.setFont(font);
}


void RerreDisplay169::writeInMiddle(String text, uint16_t color, int fontHeight) {
  int16_t x, y;
  uint16_t w, h;
  tft.getTextBounds(text.c_str(), 0, 0, &x, &y, &w, &h);
  y = (tft.height() + fontHeight) / 2;
  x = (tft.width() - w) / 2;
  setCursor(x, y);
  tft.setTextColor(color);
  tft.print(text);
}

void RerreDisplay169::setCursor(int16_t x, int16_t y) {
  tft.setCursor(x, y);
}

void RerreDisplay169::setCustomFont(const GFXfont* customFont) {
  tft.setFont(customFont);
}
