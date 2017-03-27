#pragma once

#include "Arma.h"

class Melee : public Arma{
private:
  int efectividad;

public:
  Melee();
  Melee(string, int, int);

  int getEfectividad();

  virtual ~Melee();
};
