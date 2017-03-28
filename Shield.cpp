<<<<<<< HEAD
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
=======
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

Shield::~Shield(){

}
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
