#include <HuemonelabKit.h>

RGBLed rgb(11, 10, 9);

void setup(){

}

void loop()
{
  for(int i=0;i<=255;i++) {
        rgb.setColor(i, 255 - i, 255);
        delay(10);
  }
  delay(1000);
  for(int i=0;i<=255;i++) {
        rgb.setColor(255, i, 255 - i);
        delay(10);
  }
  delay(1000);
  for(int i=0;i<=255;i++) {
        rgb.setColor(255 - i, 255, i);
        delay(10);
  }
  delay(1000);
}
