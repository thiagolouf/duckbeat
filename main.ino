#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>
#include <Adafruit_NeoPixel.h>


#define TFT_CS     7
#define TFT_RST    20
#define TFT_DC     8
#define TFT_MOSI   6
#define TFT_SCLK   4

#define LED_PIN    2
#define LED_COUNT  5

#define BTN1 9
#define BTN2 5
#define BTN3 21

#define ENC_A 0
#define ENC_B 1
#define ENC_SW 10

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {

  Serial.begin(115200);

  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);

  pinMode(ENC_A, INPUT_PULLUP);
  pinMode(ENC_B, INPUT_PULLUP);
  pinMode(ENC_SW, INPUT_PULLUP);

  tft.initR(INITR_BLACKTAB);
  tft.fillScreen(ST77XX_BLACK);

  strip.begin();
  strip.show();

  tft.setTextColor(ST77XX_WHITE);
  tft.setCursor(10, 30);
  tft.print("DuckBeat");
}

void loop() {

  if(digitalRead(BTN1) == LOW) {
    tft.fillScreen(ST77XX_BLUE);
  }

}
