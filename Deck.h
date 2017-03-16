#pragma once

#include "Carta.h"
#include <vector>

class Deck{
private:
  vector<Carta*> cartas;
  string nombre;
public:
  Deck();
  Deck(string);

  string getNombre();
  void setNombre(string);

  Carta* getCarta(int);
  void addCarta(Carta*);
};
