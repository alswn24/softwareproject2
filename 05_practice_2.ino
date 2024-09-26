#define PIN_LED 7
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // LED를 키고 1초 대기:
  digitalWrite(PIN_LED, 0);
  delay(1000);
  
  // 1초 동안 LED가 5번 깜빡임:
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 1);
    delay(100);
    digitalWrite(PIN_LED, 0);
    delay(100);
  }

  // LED를 꺼진 상태로 유지 시킴:
  digitalWrite(PIN_LED, 1);
  while (true) {
  //무한 루프
  }
}
