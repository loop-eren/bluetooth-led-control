#include <Arduino.h>
char input_char;
const int green=2,yellow=3,white=4,red=5;
void setup() {
    //in here we set the variables 
    pinMode(green,OUTPUT);
    pinMode(yellow,OUTPUT);
    pinMode(white,OUTPUT);
    pinMode(red,OUTPUT);
    Serial.begin(9600);
   
}

void loop() {
    // in here we create a condition
  while (Serial.available()>0){
      input_char=Serial.read();
      if(input_char=='0'){
        digitalWrite(red,HIGH);
        Serial.println('Red led is opened');
      }
      else if(input_char=='1'){
        digitalWrite(red,LOW);
        Serial.println('Red led is closed');
      }  if(input_char=='2'){
        digitalWrite(red,HIGH);
        Serial.println('White led is opened');
      }
      else if(input_char=='3'){
        digitalWrite(red,LOW);
        Serial.println('White led is closed');
      }  if(input_char=='4'){
        digitalWrite(red,HIGH);
        Serial.println('yellow led is opened');
      }
      else if(input_char=='5'){
        digitalWrite(red,LOW);
        Serial.println('yellow led is closed');
      }  if(input_char=='6'){
        digitalWrite(red,HIGH);
        Serial.println('Green led is opened');
      }
      else if(input_char=='7'){
        digitalWrite(red,LOW);
        Serial.println('Green led is closed');
      }
 }}
