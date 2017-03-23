#pragma once
#include "Carta.h"

class Monsters : public Carta{
private:
  Arma* weapon;
  Shield* escudo;
  Magia* magia;

public:
  Monsters();
  Monsters(string, int);
  Monsters(int, int, string, int);

  void setArma(Arma*);
  void setShield(Shield*);
  void setMagia(Magia*);

  Arma* getArma();
  Shield* getShield();
  Magia* getMagia();
  
  void Especial(Carta*);
};
