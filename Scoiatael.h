#pragma once
#include "Carta.h"

class Scoiatael : public Carta{
private:

public:
  Scoiatael();
  Scoiatael(string, int);
  Scoiatael(int, int, string, int);
  void Especial(Carta*);
};
