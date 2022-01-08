#include <HuemonelabKit.h>

Led led1(2), led2(3), led3(4), led4(5), led5(6), led6(7), led7(8), led8(9), led9(10), led10(12);
Buzzer buzzer(13);
int i = 0;

void leds1() {
    for(int i = 0; i < 5; i++) {
    led10.on(); led1.on();
    delay(50);
    led10.off(); led1.off(); led9.on(); led2.on();
    delay(50);
    led9.off(); led2.off(); led8.on(); led3.on();
    delay(50);
    led8.off(); led3.off(); led7.on(); led4.on();
    delay(50);
    led7.off(); led4.off(); led6.on(); led5.on();
    delay(50);
    led6.off(); led5.off(); led5.on(); led6.on();
    delay(50);
    led5.off(); led6.off(); led4.on(); led7.on();
    delay(50);
    led4.off(); led7.off(); led3.on(); led8.on();
    delay(50);
    led3.off(); led8.off(); led2.on(); led9.on();
    delay(50);
    led2.off(); led9.off(); led1.on(); led10.on();
    delay(50);
    led1.off(); led10.off();
    }
}

void leds2() {
    for(int i = 0; i < 3; i++) {
    led1.on(); led3.on();
    delay(100);
    led1.off();led3.off(); led2.on(); led4.on();
    delay(100);
    led2.off(); led4.off(); led3.on(); led5.on();
    delay(100);
    led3.off(); led5.off();led4.on();led6.on();
    delay(100);
    led4.off(); led6.off(); led5.on(); led7.on();
    delay(100);
    led5.off(); led7.off(); led6.on(); led8.on();
    delay(50);
    led6.off(); led8.off(); led7.on(); led9.on();
    delay(100);
    led7.off(); led9.off(); led8.on(); led10.on();
    delay(100);
    led8.off(); led10.off();
    
    led10.on(); delay(100);
    led10.off(); led9.on(); delay(100);
    led9.off(); led8.on(); delay(100);
    led8.off(); led7.on(); delay(100);
    led7.off(); led6.on(); delay(100);
    led6.off(); led5.on();delay(100);
    led5.off(); led4.on(); delay(100);
    led4.off(); led3.on(); delay(100);
    led3.off(); led3.on(); delay(100);
    led3.off(); led2.on(); delay(100);
    led2.off(); led1.on(); delay(100);
    led1.off();
    }
}

void setup() {
    led10.on(); delay(2200);
    led9.on(); delay(2000);
    led8.on(); delay(1800);
    led7.on(); delay(1600);
    led6.on(); delay(1400);
    led5.on(); delay(1200);
    led4.on(); delay(1000);
    led3.on(); delay(800);
    led3.on(); delay(600);
    led2.on(); delay(400);
    led1.on(); delay(200);
    
    led1.off(); led2.off();
    led3.off(); led4.off();
    led5.off(); led6.off();
    led7.off(); led8.off();
    led9.off(); led10.off();
}

void loop() {
  if(i != 5) {
    i++;
    buzzer.play(i);
    led1.on(); delay(200); led1.off();
    led2.on(); delay(200); led2.off();
    led3.on(); delay(200); led3.off();
    led4.on(); delay(200); led4.off();
    led5.on(); delay(200); led5.off();
    led6.on(); delay(200); led6.off();
    led7.on(); delay(200); led7.off();
    led8.on(); delay(200); led8.off();
    led9.on(); delay(200); led9.off();
    led10.on(); delay(200); led10.off();
    delay(100);
  } else {
    i = 0;
    leds1();
    leds2();
    leds1();
  }
}
