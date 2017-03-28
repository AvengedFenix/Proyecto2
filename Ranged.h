#pragma once

#include "Arma.h"

class Ranged : public Arma{
private:
  int range;
public:
  Ranged();
  Ranged(string, int, int);
  int getRange();
  ~Ranged();
};
