#include "DHT.h" //libary for DHT sensors
#define dhtPin 12 // data pin
/*
 *  uncomment the correct chip
 */ 
 #define dhtType DHT11  //DHT11
 //#define dhtType DHT22 
 //#define dhtType DHT21
 DHT dht(dhtPin, dhtType);

 float humidityVal;
 float tempValC;
 float tempValF;
 float heatIndexC;
 float heatIndexF;

 void setup() {
  Serial.begin(9600);
  dht.begin();
 }

 void loop(){
  humidityVal = dht.readHumidity();
  tempValC = dht.readTemperature();
  tempValF = dht.readTemperature(true);

  if (isnan(humidityVal) || isnan(tempValC) || isnan(tempValF)) {
    Serial.println("Reading DHT sensor failed!");

    return;
  }
  heatIndexC = dht.computeHeatIndex(tempValC, humidityVal, false);
  heatIndexF = dht.computeHeatIndex(tempValF, humidityVal);
  Serial.print("Humidity: ");
  Serial.print(humidityVal);
  Serial.print(" %/t ");

  Serial.print("Temperature: ");
  Serial.print(tempValC);
  Serial.print(" C ");
  Serial.print(tempValF);
  Serial.print(" F/t ");

  Serial.print("Windchill: ");
  Serial.print(heatIndexC);
  Serial.print(" C ");
  Serial.print(heatIndexF);
  Serial.println(" F ");

  Serial.print(humidityVal);
  Serial.print("/t");
  Serial.print(tempValC);
  Serial.print("/n");

  delay(2000);
  
 }
