#include <Arduino.h>

int red_led = 4;
int yellow_led = 3;
int green_led = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led, HIGH);
  delay(4000);
  digitalWrite(red_led, LOW);

  digitalWrite(yellow_led, HIGH);
  delay(2000);
  digitalWrite(yellow_led, LOW);

  digitalWrite(green_led, HIGH);
  delay(4000);
  digitalWrite(green_led, LOW);

  digitalWrite(yellow_led, HIGH);
  delay(2000);
  digitalWrite(yellow_led, LOW);


}