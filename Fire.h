#pragma once

#include "Magia.h"

class Fire : public Magia{
private:
  int burndamage;
public:
  Fire();
  Fire(int, int, int);

  int getBurnDamage();

  virtual ~Fire();


};
