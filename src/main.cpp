#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Wire.h>

// initialisation des broches
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Déclaration des variables
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(switchPin,INPUT);

  lcd.print("Demandez a la");
  lcd.setCursor(0,1);
  lcd.print("boule magique !");
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState){
    if (switchState == LOW){
      reply = random(8);
    }
  }

}
