#pragma once
#include "Carta.h"

class Monsters : public Carta{
private:

public:
  Monsters();
  Monsters(string, int);
  Monsters(int, int, string, int);
  void Especial(Carta*);
};
