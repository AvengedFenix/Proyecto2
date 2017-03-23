#pragma once

class Melee : public Arma{
private:
  int efectividad;

public:
  Arma();
  Arma(string, int, int);

  int getEfectividad();

  virtual ~Melee();
};
