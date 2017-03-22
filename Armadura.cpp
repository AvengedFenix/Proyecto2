#include "Armadura.h"

Armadura::Armadura(){
  peso = duracion = 0;
}

Armadura::Armadura(int peso, int duracion){
  this -> peso = peso;
  this -> duracion = duracion;
}

int Armadura::getPeso(){
  return peso;
}

int Armadura::getDuracion(){
  return duracion;
}

Armadura::~Armadura(){
  
}
