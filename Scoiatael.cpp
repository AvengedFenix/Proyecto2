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
