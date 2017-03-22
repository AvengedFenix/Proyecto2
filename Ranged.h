#pragma once

#include "Arma.h"

class Ranged : public Arma{
private:
  int range;
public:
  Arma();
  Arma(string, int, int);
  int getRange();

};
