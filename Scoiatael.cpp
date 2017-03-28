<<<<<<< HEAD
#include "Monsters.h"
#include "Nilfgaardians.h"
#include "Scoiatael.h"
#include "NorthernRealms.h"

Scoiatael::Scoiatael(){

}

Scoiatael::Scoiatael(string nombre, double valor) : Carta(nombre, valor){

}

Scoiatael::Scoiatael(int posx, int posy, string nombre, double valor) : Carta(posx, posy, nombre, valor){

}

void Scoiatael::Especial(Carta* carta){
  int ataque = this -> getValor();
  if(typeid(*carta).name() == typeid(Nilfgaardians).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .20;
  }else if(typeid(*carta).name() == typeid(NorthernRealms).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .5;
  }else if(typeid(*carta).name() == typeid(Scoiatael).name()){
    ataque += this -> getMagia() -> getDamage();
  }else if(typeid(*carta).name() == typeid(Monsters).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .15;
  }
  carta -> setValor(carta -> getValor() - ataque);
}

void Scoiatael::Attack(Carta* carta){
  if(typeid(*carta).name() == typeid(NorthernRealms).name()){
    this -> heal();
  }
  carta -> setValor(carta -> getValor() - this -> getArma() -> getDamage());
}

Scoiatael::~Scoiatael(){

}

void Scoiatael::setArmadura(){

}

void Scoiatael::setArma(){
  //new arma con damage 100

}

void Scoiatael::setShield(){

}

void Scoiatael::setMagia(){

}

bool Scoiatael::correr(){
  if((int)valor % 2 == 0){
    return true;
  }else{
    return false;
  }
}

void Scoiatael::heal(){
  valor += 70;
}
=======
#include "Scoiatael.h"

Scoiatael::Scoiatael(){

}

Scoiatael::Scoiatael(string nombre, int valor) : Carta(nombre, valor){

}

Scoiatael::Scoiatael(int posx, int posy, string nombre, int valor) : Carta(posx, posy, nombre, valor){

}

void Scoiatael::Especial(Carta* carta){
  carta -> setValor((carta -> getValor())/* - cualquier valor*/);
}
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
