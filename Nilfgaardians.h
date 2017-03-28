#pragma once
#include "Carta.h"

class Nilfgaardians : public Carta{
private:
  Arma* weapon;
  Shield* escudo;

public:
  Nilfgaardians();
  Nilfgaardians(string, int);
  Nilfgaardians(int, int, string, int);


  virtual void Attack(Carta*);

  void Especial(Carta*);

  virtual ~Nilfgaardians();
};
