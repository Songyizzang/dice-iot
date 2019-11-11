
#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif

const unsigned char arrow[] PROGMEM = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x03,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0xfe,0x0f,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe3,0xf8,0x3f,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0xf0,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x41,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x03,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x07,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x0f,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x07,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x03,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x00,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x00,0x7f,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
};


static const uint8_t discount_arrow[] PROGMEM = {
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xfe,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x3f,
  0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,
  0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,
  0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x3f,
  0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x3f,
  0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0x3f,
  0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x3f,
  0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x3f,
  0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0x3f,
  0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0x3f,
  0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x3f,
  0x00,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x3f,
  0x00,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x00,0x3f,
  0x00,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x00,0x3f,
  0x00,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0x00,0x3f,
  0x00,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,0x3f,
  0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x00,0x3f,
  0x00,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0x00,0x3f,
  0x00,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x00,0x3f,
  0x00,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x3f,
  0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0xff,0xfe,0x00,0x00,0x3f,
  0x00,0x00,0x07,0xff,0xff,0xff,0xff,0xff,0xfc,0x00,0x00,0x3f,
  0x00,0x00,0x03,0xff,0xff,0xff,0xff,0xff,0xf8,0x00,0x00,0x3f,
  0x00,0x00,0x01,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,0x00,0x3f,
  0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xe0,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xc0,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x3f,0xff,0xff,0xff,0xff,0x80,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x1f,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xfe,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x07,0xff,0xff,0xff,0xfe,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x03,0xff,0xff,0xff,0xf8,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x01,0xff,0xff,0xff,0xf0,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xf0,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x7f,0xff,0xff,0xc0,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x3f,0xff,0xff,0xc0,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x3f,0xff,0xff,0x80,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x0f,0xff,0xff,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x07,0xff,0xfe,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x07,0xff,0xfc,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x01,0xff,0xf8,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x01,0xff,0xf0,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x00,0xff,0xe0,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x00,0x7f,0xc0,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x00,0x3f,0x80,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x3f,
  0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0x00,0x00,0x3f,
  
  
};
