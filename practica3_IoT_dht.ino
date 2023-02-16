// Practica 3 IoT                     Armando Cabrales 

#include "DHT.h"
DHT dht15(4,DHT11);
void setup(){
  Serial.begin(9600);
  delay(2000);
  dht15.begin();
}


void loop(){
  Serial.println("Temperatura en el sensor");
  Serial.println((dht15.readTemperature( )));
  Serial.println("Humedad en el sensor");
  Serial.println((dht15.readHumidity()));
  delay(5000);
}
