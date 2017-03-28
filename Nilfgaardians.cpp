#include "Monsters.h"
#include "Nilfgaardians.h"
#include "Scoiatael.h"
#include "NorthernRealms.h"

Nilfgaardians::Nilfgaardians(){

}

Nilfgaardians::Nilfgaardians(string nombre, double valor) : Carta(nombre, valor){

}

Nilfgaardians::Nilfgaardians(int posx, int posy, string nombre, double valor) : Carta(posx, posy, nombre, valor){

}

void Nilfgaardians::Especial(Carta* carta){
  double ataque = this -> getValor();
  if(typeid(*carta).name() == typeid(Nilfgaardians).name()){
    ataque += this -> getMagia() -> getDamage();
  }else if(typeid(*carta).name() == typeid(NorthernRealms).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .15;
  }else if(typeid(*carta).name() == typeid(Scoiatael).name()){
    ataque += this -> getMagia() -> getDamage() * .10;
  }else if(typeid(*carta).name() == typeid(Monsters).name()){
    ataque += this -> getMagia() -> getDamage() * .20;
  }
  carta -> setValor(carta -> getValor() - ataque);
}

void Nilfgaardians::Attack(Carta* carta){
  if(typeid(*carta).name() == typeid(Scoiatael).name()){
    this -> heal();
  }
  carta -> setValor(carta -> getValor() - this -> getArma() -> getDamage());

}

void Nilfgaardians::setArmadura(){
  armor = new ArmaduraMedia(50, 30);
}

void Nilfgaardians::setArma(){
  weapon = new Ranged("Bow", 150.0, 10);
}

void Nilfgaardians::setShield(){
  escudo = new WoodShield(40,25);
}

void Nilfgaardians::setMagia(){
  magia = new Ice(50, 20, 30);
}

bool Nilfgaardians::correr(){
  if(valor > 450){
    return true;
  }else{
    return false;
  }
}

void Nilfgaardians::heal(){
  this -> valor += 40;
}
Nilfgaardians::~Nilfgaardians(){

}
