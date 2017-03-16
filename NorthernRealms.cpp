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
