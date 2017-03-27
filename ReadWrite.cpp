#include <iostream>
//#include "Alumno.h"
#include "ReadWrite.h"
using namespace std;


ReadWrite::ReadWrite(string fname){
  file.open("Carta.txt", ios::in | ios::out);
}

Carta* ReadWrite::leer(){
  Carta* carta= NULL;

   	//file.close();
   	if(file.is_open()){
      	   carta=new Carta();
      	   file>>*carta;
   	 }


}

bool ReadWrite::guardar(Carta* a){
   file<<*a;
}
