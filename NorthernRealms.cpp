<<<<<<< HEAD
#include "Monsters.h"
#include "Nilfgaardians.h"
#include "Scoiatael.h"
#include "NorthernRealms.h"

NorthernRealms::NorthernRealms(){

}

NorthernRealms::NorthernRealms(string nombre, double valor) : Carta(nombre, valor){

}

NorthernRealms::NorthernRealms(int posx, int posy, string nombre, double valor) : Carta(posx, posy, nombre, valor){

}

void NorthernRealms::Especial(Carta* carta){
  int ataque = this -> getValor();
  if(typeid(*carta).name() == typeid(Nilfgaardians).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .25;
  }else if(typeid(*carta).name() == typeid(NorthernRealms).name()){
    ataque += this -> getMagia() -> getDamage();
  }else if(typeid(*carta).name() == typeid(Scoiatael).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .15;
  }else if(typeid(*carta).name() == typeid(Monsters).name()){
    ataque += this -> getMagia() -> getDamage() + this -> getMagia() -> getDamage()* .25;
  }
  carta -> setValor(carta -> getValor() - ataque);
}

void NorthernRealms::Attack(Carta* carta){
  if(typeid(*carta).name() == typeid(Monsters).name()){
    this -> heal();
  }
  carta -> setValor(carta -> getValor() - this -> getArma() -> getDamage());

}

NorthernRealms::~NorthernRealms(){

}

void NorthernRealms::setArmadura(){
  armor = new ArmaduraPesada(70, 40);
}

void NorthernRealms::setArma(){
  //crear arma con damage 200
  weapon = new Melee("Longsword" , 200, 40);

}

void NorthernRealms::setShield(){
  escudo = new MetalShield(20, 30);

}

void NorthernRealms::setMagia(){
  magia = new Ice(30, 30, 20);
}

bool NorthernRealms::correr(){
  if(valor > 400){
    return true;
  }else{
    return false;
  }
}

void NorthernRealms::heal(){
  valor += 50;
}
=======
#include "NorthernRealms.h"

NorthernRealms::NorthernRealms(){

}

NorthernRealms::NorthernRealms(string nombre, int valor) : Carta(nombre, valor){

}

NorthernRealms::NorthernRealms(int posx, int posy, string nombre, int valor) : Carta(posx, posy, nombre, valor){

}

void NorthernRealms::Especial(Carta* carta){
  carta -> setValor((carta -> getValor())/* - cualquier valor*/);
}
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
