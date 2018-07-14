/**
 * DHT11 관련 라이브러리가 워낙 많음
 * 아두이노의 스케치 라이브러리에도 여러 가지 DHT 라이브러리가 설치되었을 가능성이 높음
 * (1)예제에서 DHT 라이브러리 하나 선택하고
 * (2)예제를 참조로 하여 API를 확인하고 코드를 작성하는 것이 편하고 안전한 방법임
 * 
 * 아래는 오래된 DHT11 라이브러리를 참조하여 작성하였음
 */

#include <DHT11.h>

//here we use 14 of ESP32 to read data
#define DHTPIN 15
//create an instance of DHT sensor
//DHT dht(DHTPIN, DHTTYPE);
DHT11 dht11(DHTPIN);
 
void setup()
{
Serial.begin(115200);
Serial.println("DHT11 sensor!");
//call begin to start sensor
}
 
void loop() {
  int err;
  float temp, humi;
  if((err=dht11.read(humi, temp))==0)
  {
    Serial.print("temperature:");
    Serial.print(temp);
    Serial.print(" humidity:");
    Serial.print(humi);
    Serial.println();
  }
  else
  {
    Serial.println();
    Serial.print("Error No :");
    Serial.print(err);
    Serial.println();    
  }
  delay(DHT11_RETRY_DELAY); //delay for reread
}