#pragma once

class Armadura{
private:
  int peso;
  int duracion;

public:
  Armadura();

  Armadura(int, int);

  int getPeso();
  int getDuracion();

  virtual ~Armadura();
};
