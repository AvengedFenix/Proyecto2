#include "Nilfgaardians.h"

Nilfgaardians::Nilfgaardians(){

}

Nilfgaardians::Nilfgaardians(string nombre, int valor) : Carta(nombre, valor){

}

Nilfgaardians::Nilfgaardians(int posx, int posy, string nombre, int valor) : Carta(posx, posy, nombre, valor){

}

void Nilfgaardians::Especial(Carta* carta){
  carta -> setValor((carta -> getValor())/* - cualquier valor*/);
}

void Nilfgaardians::Attack(Carta* carta){
  
}
