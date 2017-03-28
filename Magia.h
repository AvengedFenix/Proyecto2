#pragma once

#include <string>

class Magia{
protected:
  int damage;
  int tiempo; // time to cast
public:
  Magia();
  Magia(int, int);

  int getDamage();
  int getTiempo();

  virtual ~Magia();
};
