#pragma once

#include "Deck.h"
#include "Carta.h"
#include <string>
#include <vector>

using namespace std;

class Jugador{
private:
  string nombre;
  Carta* carta;

public:
  Jugador();
  Jugador(string);

  string getNombre();
  Carta* getCarta();

  void setNombre(string);
  void setCarta(Carta*);

  virtual ~Jugador();
};
