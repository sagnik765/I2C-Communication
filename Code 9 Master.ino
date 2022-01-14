#include <Wire.h>;
int analogIN = 0;
int msg = 0;
void setup() {
pinMode(A0, INPUT);
Wire.begin();
Serial.begin(9600);
Serial.print("Welcome to the master");
}
void loop(){
analogIN=analogRead(A0);
msg = map(analogIN, 0, 1023, 0, 255);
Wire.beginTransmission(9); 
Wire.write(msg); 
Wire.endTransmission();
Serial.println(msg);
delay(500);
}