#pragma once

#include "Magia.h"

class Ice : public Magia{
private:
  int freezedamage;
public:
  Ice();
  Ice(int, int, int);

  int getFreezeDamage();

  virtual ~Ice();


};
