#include<Arduino.h>
#include<Servo.h>
#include<./PS2X_lib.h>
#define PS2_DAT A0
#define PS2_CMD A1
#define PS2_CS A2
#define PS2_CLK A3
#define ENA 5
#define IN1 2
#define IN2 4
#define ENB 3
#define IN3 6
#define IN4 7
#define RELAY1 12
#define RELAY2 13
#define SERVO_PIN 9
PS2X ps2x;
Servo myservo;
bool relay1state = false;
bool relay2state = false;

void setup() {
    Serial.begin(9600);

    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(RELAY1, OUTPUT);
    pinMode(RELAY2, OUTPUT);
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
}

void loop() {
}



