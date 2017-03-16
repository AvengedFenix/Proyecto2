#pragma once

#include <string>
using namespace std;

class Carta{
private:
  int posx;
  int posy;
  string nombre;
  int valor;

public:
  Carta();
  Carta(string, int);
  Carta(int, int, string, int);

  virtual int getX();
  virtual int getY();
  virtual string getNombre();
  virtual int getValor();

  virtual void setX(int);
  virtual void setY(int);
  virtual void setNombre(string);
  virtual void setValor(int);

  virtual void Especial(Carta*);
  virtual ~Carta();
};
