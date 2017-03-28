#include "Shield.h"

Shield::Shield(){
  duracion = strength = 0;
}

Shield::Shield(int duracion, int strength){
  this -> duracion = duracion;
  this -> strength = strength;
}

int Shield::getDuracion(){
  return duracion;
}

int Shield::getStrength(){
  return strength;
}

void Shield::idk(){

}

Shield::~Shield(){

}
