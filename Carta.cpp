#include "Carta.h"
#include <string>

Carta::Carta(){
  posx = posy = valor = 0;
}

Carta::Carta(string nombre, int valor){
  this -> nombre = nombre;
  this -> valor = valor;
}

Carta::Carta(int posx, int posy, string nombre, int valor){
  this -> posx = posx;
  this -> posy = posy;
  this -> nombre = nombre;
  this -> valor = valor;
}

int Carta::getX(){
  return posx;
}

int Carta::getY(){
  return posy;
}

string Carta::getNombre(){
  return nombre;
}

int Carta::getValor(){
  return valor;
}

void Carta::setX(int x){
  posx = x;
}

void Carta::setY(int y){
  posy = y;
}

void Carta::setNombre(string name){
  nombre = name;
}

void Carta::setValor(int value){
  valor = value;
}

void Carta::Especial(Carta* carta){

}

Carta::~Carta(){

}
