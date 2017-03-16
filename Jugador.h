#pragma once

#include "Deck.h"
#include <string>
#include <vector>

using namespace std;

class Jugador{
private:
  string nombre;
  vector<Deck*> decks;

public:
  Jugador();
  Jugador(string);

  string getNombre();
  Deck* getDeck(int);

  void setNombre(string);
  void addDeck(Deck*);

  virtual ~Jugador();
};
