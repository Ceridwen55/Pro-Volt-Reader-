#include <Arduino.h>


int readPin = A5;
void setup() 
{
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  
  Serial.print(analogRead(readPin));
}

