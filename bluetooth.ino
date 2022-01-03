#include <HuemonelabKit.h>

Bluetooth bluetooth(2, 3);

void setup(){
  Serial.begin(9600); //시리얼 통신 속도 9600으로 설정
  bluetooth.begin(9600); //블루투스 통신 속도 9600으로 설정 - 블루투스 기능 사용에 필요
}

void loop()
{  
  bluetooth.setName(); //블루투스 이름 정하기
}
