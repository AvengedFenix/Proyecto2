#pragma once
#include "Carta.h"

class NorthernRealms : public Carta{
private:

public:
  NorthernRealms();
  NorthernRealms(string, int);
  NorthernRealms(int, int, string, int);
  void Especial(Carta*);
};
