#include <Arduino.h>
class Motor {
  public:
    Motor(int EN, int IN1, int IN2);
    void setSpeed(int speed);
    void setDirection(int direction);
    void stop();
  private:
    int _EN;
    int _IN1;
    int _IN2;
    int _speed;
    int _direction;
};