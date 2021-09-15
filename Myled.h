#ifndef _MYLED_H_
#define _MYLED_H_

#include <Arduino.h>

#define DEFAULT_ACTIVE LOW
class MyLed{

private:
  int pin;
  bool pinActive;
  


public:
  Myled(int pin, boolean DEFAULT_ACTIVE);
  ~Myled();

  void loop();
}
