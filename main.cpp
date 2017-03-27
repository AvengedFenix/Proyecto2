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
#include "Carta.h"
#include "Monsters.h"
#include "g_cartas.h"


#include <iostream>
#include <vector>
#include <typeinfo>
#include <ctime>
#include <string.h>
#include <cstdarg>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <sys/stat.h>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/binary_object.hpp>
#include <boost/archive/polymorphic_binary_iarchive.hpp>
#include <boost/archive/polymorphic_binary_oarchive.hpp>

using namespace std;

void guardarCartas(const g_cartas &cons){


    std::ofstream ofs("./Binario/DataCartas.bin", /*std::ios::app &*/ std::ios::binary);
    boost::archive::polymorphic_binary_oarchive archivo(ofs);
    archivo << cons;



}


void leerCartas(g_cartas &s)
{

    std::ifstream ifs("./Binario/DataCartas.bin", std::ios::binary);
    boost::archive::polymorphic_binary_iarchive archivo(ifs);

    archivo >> s;
}

//void Simulacion(vector<Bender*>);

int main(int argc, char const *argv[]){
  g_cartas guardarc;
  vector<Carta*> cartas;
  ifstream cartasbin("./Binario/DataCartas.bin");
  /*if (cartasbin.good()){//si el archivo de consolas ya existe, leo los datos
    g_cartas cartasguardadas;
    leerCartas(cartasguardadas);

    //cout << "Consolas de archivo binario: " << endl;

    for(int i = 0; i < cartasguardadas.sizeVector(); i++){
      cout << "Consola " << i << endl;
      cout << "Nombre " << cartasguardadas.getCarta(i) -> getNombre() << endl;


      string nombre = cartasguardadas.getCarta(i) -> getNombre();
      int valor = cartasguardadas.getCarta(i) -> getValor();


      if(typeid(cartasguardadas.getCarta(i)).name() == typeid(Monsters).name()){
        Monsters* carta = ((Monsters*)cartasguardadas.getCarta(i));
        cout << "Es monster" << endl;

        cout << "Nombre: " << carta -> getNombre() << endl;
        if(typeid(*(cartasguardadas.getCarta(i) -> getArma())).name() == typeid(Ranged).name()){
          cout << "Arma: Ranged" << endl;
          string nombrearma = cartasguardadas.getCarta(i) -> getArma() -> getNombre();
          int damage = cartasguardadas.getCarta(i) -> getArma() -> getDamage();
          Ranged* ran = ((Ranged*)(cartasguardadas.getCarta(i) -> getArma()));
          int range = ran -> getRange();

          Arma* arma = new Ranged(nombrearma, damage, range);
          carta -> setArma(arma);
          //Ranged ranged(nombrearma, damage, range);
        }else if(typeid(*(cartasguardadas.getCarta(i) -> getArma())).name() == typeid(Melee).name()){

        }


        if(typeid(*(cartasguardadas.getCarta(i) -> getMagia())).name() == typeid(Fire).name()){

        }
        cartas.push_back(carta);
        cout << typeid(*cartas.back()).name();
      }else if(typeid(cartasguardadas.getCarta(i)).name() == typeid(Nilfgaardians).name()){

      }


    }
    //cout << "Existe" << endl;

    //cout << consolas2.size() << endl;
  }else{
    //cout << "No existe" << endl;
  }*/


  Carta* carta = new Monsters("Werewolf", 1300);


  Arma* arma = new Ranged("Crossbow", 20, 10);
  carta -> setArma(arma);

  Magia* magia = new Fire(20,30,40);
  carta -> setMagia(magia);

  Shield* shield = new MagicShield(10,50,20);
  carta -> setShield(shield);
/*  Ranged arma("Crossbow", 20, 10);
  carta -> setArma(arma);

  Fire magia(20,30,40);
  carta -> setMagia(magia);

  MagicShield shield(10, 50, 20);
  carta -> setShield(shield);*/

  cartas.push_back(carta);



  Carta* carta2 = new Nilfgaardians("Manolo", 1500);

  Arma* arma2 = new Ranged("Bow", 10, 5);
  carta -> setArma(arma2);

  Magia* magia2 = new Ice(10,40, 50);
  carta -> setMagia(magia2);

  Shield* shield2 = new WoodShield(20,30);
  carta -> setShield(shield2);

  /*Ranged arma2("Bow", 10, 5);
  carta -> setArma(arma2);

  Ice magia2(10,40,50);
  carta -> setMagia(magia2);

  WoodShield shield2(20,30);
  carta -> setShield(shield2);*/

  cartas.push_back(carta2);

  for(int i =0; i<cartas.size(); i++){
    guardarc.addCarta(cartas[i]);
  }
  guardarCartas(guardarc);


  for(int i =0; i< cartas.size(); i++){
    delete cartas[i];
  }


    /*std::vector<Bender*> benders;
    char resp = 's';
    while (resp == 's' || resp == 'S') {
        std::cout << "1. Crear \n2. Simulacion" << endl;
        int op;
        std::cin >> op;
        switch (op) {
            case 1:{
                std::cout << "1. Arma \n2. Armadura \n3. Magia \n4. Shield" << endl;
                int mepisan;
                std::cin >> mepisan;
                switch (mepisan) {
                    case 1:{
                        std::cout << "1. " << endl;
                        break;
                    }// fin case 1.1
                    case 2:{
                        std::cout << "1. ArmaduraLiviana \n2. ArmaduraMedia \n 3. ArmaduraPesada" << endl;
                        break;
                    }//fin case 1.2
                    case 3:{
                        std::cout << "1. Fire \n 2. Ice" <<endl;
                        break;
                    }//fin case 1.3
                    case 4:{
                        std::cout << "1. MagicShield \n2. MetalShield\n3. WoodShield" << endl;
                        break;
                    }//fin case 1.4
                }//fin switch 1.1
                break;
            }//fin case 1
            case 2:{
                Simulacion(benders);
            }
        }//fin switch
        std::cout << "Desea continuar S/N" << endl;
        std::cin >> resp;
    }//fin while

    return 0;
}//fin main

void Simulacion(vector<Bender*> v){
    if (v.size()<2) {
        std::cout << "No hay personajes registrados, porfavor registre 2 al menos" << '\n';
    }else{
        std::cout << "Jugador 1, Elija su personaje" << endl;
        for (int i = 0; i < v.size(); i++) {
            std::cout << i << ". " << v[i]->getNombre() << endl;
        }
        int J1;
        std::cin >> J1;
    //    v.erase(vec.begin() +jug1);
        std::cout << "Jugador 2, Elija su personaje" << endl;
        int J2;
        std::cin >> J2;
        while (J1 == J2) {
            std::cout << "No puede elegir ese personaje, el jugador 1 ya lo tomo" << endl;
            std::cin >> J2;
        }
        bool seguir = true;
        int turno = 1;
        while (seguir == true) {
            int simu;
            std::cout << "Jugador "<<turno << "Elija su opcion \n1. Attack \n2. Special Attack \n3. Spy \n4. Heal \n5. Run"<< endl;
            std::cin >> simu;
            switch (simu) {
                case 1:{
                    if (turno == 1) {
                        v[J1]->ataqueRegular(v[J2]);
                    }else{
                        v[J2]->ataqueRegular(v[J1]);
                    }
                    break;
                }// fin case 1
                case 2:{
                    if (turno == 1) {
                        v[J1]->ataqueEspecial(v[J2]);
                    }else{
                        v[J2]->ataqueEspecial(v[J1]);
                    }
                    break;
                }//fin case 2
                case 3:{
                    if (turno == 1) {
                        if (typeid(*v[J1]).name() == typeid(Earthbenders).name()) {
                            ((Earthbenders*)v[J1])->espiar(v[J2]);
                        }else{
                            std::cout << "Su personaje no es Earthbender" << endl;
                        }
                    }else{
                        if (typeid(*v[J2]).name() == typeid(Earthbenders).name()) {
                            ((Earthbenders*)v[J2])->espiar(v[J1]);
                        }else{
                            std::cout << "Su personaje no es Earthbender" << endl;
                        }
                    }
                    break;
                }//fin case 3
                case 4:{
                    if (turno == 1) {
                        if (typeid(*v[J1]).name() == typeid(Waterbenders).name()){
                            ((Waterbenders*)v[J1])->heal();
                        }else{
                            std::cout << "Su personaje no es Waterbender" << endl;
                        }
                    }else{
                        if (typeid(*v[J2]).name() == typeid(Waterbenders).name()){
                            ((Waterbenders*)v[J2])->heal();
                        }else{
                            std::cout << "Su personaje no es Waterbender" << endl;
                        }
                    }
                    break;
                }//fin case 4
                case 5:{
                    std::cout << "El jugador: "<< turno << " ha escapado." << endl;
                    seguir = false;
                }

                break;
            }//fin switch
            if (v[J1]->getHP()<=0) {
                std::cout << "El jugador 2 ha ganado" << endl;
                seguir = false;
            }else if (v[J2]->getHP()<=0) {
                std::cout << "El jugador 1 ha ganado" << endl;
                seguir = false;
            }
            if (turno == 1) {
                turno++;
            }else if (turno == 2) {
                turno--;
            }
        }
    }*/

    return 0;

}
