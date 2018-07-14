/*
  ESP 32 Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  The ESP32 has an internal blue LED at D2 (GPIO 02)
  0.05초 간격으로 5번 on/off 반복하는 프로그램.
  간단한 테스트용임.
*/
int LED_BUILTIN = 2;

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{

  for(int i=0; i<5; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    delay(50);
  }

  delay(500);
  

}

