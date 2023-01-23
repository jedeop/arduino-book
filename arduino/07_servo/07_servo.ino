// 라이브러리 불러오기
#include <Servo.h>

Servo servo; // 서보를 제어할 변수 생성

void setup() {
  servo.attach(9); // "9번 핀에 서보 모터 연결했어"
}

void loop() {
  servo.write(90); // 90도로 회전
  delay(1000);
  servo.write(0);
  delay(1000);
}
