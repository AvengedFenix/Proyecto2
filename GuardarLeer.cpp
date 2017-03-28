#include "Arma.h"
#include "Armadura.h"
#include "ArmaduraLiviana.h"
#include "ArmaduraMedia.h"
#include "ArmaduraPesada.h"
#include "Fire.h"
#include "Ice.h"
#include "Magia.h"
#include "MagicShield.h"
#include "Melee.h"
#include "MetalShield.h"
#include "Ranged.h"
#include "Shield.h"
#include "WoodShield.h"
#include "Nilfgaardians.h"
#include "Monsters.h"
#include "Scoiatael.h"
#include "NorthernRealms.h"

#include "Carta.h"

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sys/stat.h>
#include <sstream>
#include <cstdlib>
#include <string.h>

using namespace std;

void guardar(vector<Carta*>);
vector<Carta*> leer();
int main(){
  vector<Carta*> cartas;
  Carta* carta = new Nilfgaardians("Emhyr van Emires", 500);
  Carta* carta2 = new Scoiatael("Avallach", 700);
  Carta* carta3 = new Monsters("Eredin", 650);
  Carta* carta4 = new NorthernRealms("Foltest", 550);



  cartas.push_back(carta);
  cartas.push_back(carta2);
  cartas.push_back(carta3);
  cartas.push_back(carta4);

  for(int i = 0; i < cartas.size(); i++){
    cartas[i] -> setArma();
    cartas[i] -> setShield();
    cartas[i] -> setMagia();
    cartas[i] -> setArmadura();
  }

  guardar(cartas);




  return 0;
}

void guardar(vector<Carta*> cartas){
  ofstream outfile;
  char filename[256] = {0};
  try{
    const int directorio = system("mkdir -p ./Cartas");//-p es para crear directorio solo si no existe
  } catch (...) {
    cout << "Error" << endl;
  }

  strcpy(filename, "./Cartas/Cartas.txt");
  stringstream ss;


  for(int i =0; i<cartas.size() ; i++){
    //Arma* a = cartas[i] -> getArma();
    ss << *cartas[i];
    ss <<  *(cartas[i] -> getArma());
    ss << *(cartas[i] -> getShield());
    ss << *(cartas[i] -> getMagia());
    ss << *(cartas[i] -> getArmadura());
    ss << endl;
  }


  outfile.open(filename/*, std::ios::app*/);
  outfile << ss.str();
  outfile.close();

  vector<Carta*> leercartas = leer();


  for(int i =0; i<leercartas.size(); i++){
    cout << *leercartas[i] << endl;
    cout << *(leercartas[i] -> getArma()) << endl;
    cout << *(leercartas[i] -> getShield()) << endl;
    cout << *(leercartas[i] -> getMagia()) << endl;
    cout << *(leercartas[i] -> getArmadura()) << endl;
  }


}

vector<Carta*> leer(){
      vector<Carta*> cartas;
      ifstream file("./Cartas/Cartas.txt");
      string buffer;


      while(getline(file,buffer)){

      string split[15];//ejemplo que dio el ing. Bocanegra
      int str=0;

      for(int i=0;i<buffer.size();i++){
	       if(buffer[i]!=','){
              split[str].append(buffer,i,1);

          }else{
              str++;
          }
      }

      string id =split[0];
      string nombre =split[1];
      double valor = atoi(split[2].c_str());
      string armaid = split[3];
      string armaname = split[4];
      int armadamage = atoi(split[5].c_str());
      string shieldid = split[6];
      int shieldduracion = atoi(split[7].c_str());
      int shieldstrength = atoi(split[8].c_str());
      string magiaid = split[9];
      int magiadamage = atoi(split[10].c_str());
      int magiatiempo = atoi(split[11].c_str());
      string armaduraid = split[12];
      int armadurapeso = atoi(split[13].c_str());
      int armaduraduracion = atoi(split[14].c_str());

      Carta* carta;
      if(id == typeid(Nilfgaardians).name()){
        carta = new Nilfgaardians(nombre, valor);
      }else if(id == typeid(Scoiatael).name()){
        carta = new Scoiatael(nombre, valor);
      }else if(id == typeid(NorthernRealms).name()){
        carta = new NorthernRealms(nombre, valor);
      }else{

      }
      carta -> setArma();
      carta -> setShield();
      carta -> setMagia();
      carta -> setArmadura();

      cartas.push_back(carta);
    }

    file.close();
    return cartas;
}
