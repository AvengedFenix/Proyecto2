#pragma once
#include "Carta.h"

class Nilfgaardians : public Carta{
private:

public:
  Nilfgaardians();
  Nilfgaardians(string, int);
  Nilfgaardians(int, int, string, int);
  void Especial(Carta*);
};
