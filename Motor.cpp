#include <Arduino.h>
#include "Motor.h"

Motor::Motor(int EN, int IN1, int IN2) {
  _EN = EN;
  _IN1 = IN1;
  _IN2 = IN2;
  pinMode(_EN, OUTPUT);
  pinMode(_IN1, OUTPUT);
  pinMode(_IN2, OUTPUT);
}

void Motor::setSpeed(int speed) {
  _speed = speed;
  analogWrite(_EN, _speed);
}

void Motor::setDirection(int direction) {
  if (direction == 1) {
    digitalWrite(_IN1, HIGH);
    digitalWrite(_IN2, LOW);
  } else if (direction == 0) {
    digitalWrite(_IN1, LOW);
    digitalWrite(_IN2, HIGH);
  }
}

void Motor::stop() {
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, LOW);
}
