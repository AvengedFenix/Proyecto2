<<<<<<< HEAD
#include "Arma.h"

Arma::Arma(){
  damage = 0;
}

Arma::Arma(string nombre, int damage){
  this -> nombre = nombre;
  this -> damage = damage;
}

string Arma::getNombre(){
  return nombre;
}

int Arma::getDamage(){
  return damage;
}

void Arma::idk(){
  
}

Arma::~Arma(){

}
=======
#include "Arma.h"

Arma::Arma(){
  damage = 0;
}

Arma::Arma(string nombre, int damage){
  this -> nombre = nombre;
  this -> damage = damage;
}

string Arma::getNombre(){
  return nombre;
}

int Arma::getDamage(){
  return damage;
}

Arma::~Arma(){

}
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
