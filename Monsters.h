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


  void Attack(Carta*);
  void Especial(Carta*);


  virtual ~Monsters();
};
