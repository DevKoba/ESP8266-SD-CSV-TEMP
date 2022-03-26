#include <Arduino.h>
#include <MPU6050_tockn.h>
#include <Wire.h>
#include <ESP8266WiFi.h>

// Temperature sensor initialization
MPU6050 mpu6050(Wire);



long timer = 0;

void setup() {
  
}

void loop() {

  // Log temperature every 10 minutes (900'000 mills)
  if (millis() - timer >= 600000) {
    
  }
  
}