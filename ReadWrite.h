#pragma once
#include <iostream>
#include <fstream>
#include "Carta.h"
#include <string>

using namespace std;

class ReadWrite{
  private:
  std::fstream file;

  public:
  ReadWrite(string);
  Carta* leer();
  bool guardar(Carta*);
};
