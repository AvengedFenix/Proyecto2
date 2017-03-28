#pragma once

#include <string>

using namespace std;

class Shield{
protected:
  int duracion;
  int strength;
public:
  Shield();
  Shield(int,int);

  int getDuracion();
  int getStrength();

  virtual ~Shield();
};
