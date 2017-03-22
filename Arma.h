#pragma once

#include <string>

using namespace std;

class Arma{
private:
  string nombre;
  int damage;
public:
  Arma();
  Arma(string, int);
  string getNombre();
  int getDamage();
  virtual ~Arma();
};
