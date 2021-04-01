#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled(128, 64, &Wire, 4);

void setup() {
  // put your setup code here, to run once:
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.clearDisplay();
}

void loop() {
  // put your main code here, to run repeatedly:
  oled.setTextSize(20);
  oled.setTextColor(WHITE);
  oled.setCursor(0,0);
  oled.println(F("Hello, World!"));
  oled.display();
  delay(2000);
  oled.clearDisplay();
  delay(2000);
}
