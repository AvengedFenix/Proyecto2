#include "Monsters.h"

Monsters::Monsters(){

}

Monsters::Monsters(string nombre, int valor) : Carta(nombre, valor){

}

Monsters::Monsters(int posx, int posy, string nombre, int valor) : Carta(posx, posy, nombre, valor){

}

void Monsters::Especial(Carta* carta){
  carta -> setValor((carta -> getValor())/* - cualquier valor*/);
}
