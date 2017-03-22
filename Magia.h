#pragma once

#include <string>

class Magia{
private:
  int damage;
  int tiempo; // time to cast
public:
  Magia();
  Magia(int, int);

  int getDamage();

  virtual ~Magia();
};
