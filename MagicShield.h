#pragma once

#include "Shield.h"

class MagicShield : public Shield{
private:
  int reflect;
public:
  MagicShield();
  MagicShield(int, int, int);

  int getReflect();

  virtual ~MagicShield();
};
