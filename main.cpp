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
#include "Nilfgaardians.h"


#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

//void Simulacion(vector<Bender*>);

int main(int argc, char const *argv[]) {
    std::vector<Arma*> arma;
    std::vector<Armadura*> armadura;
    std::vector<Magia*> magia;
    std::vector<Shield*> shield;
    string nombre;
    int damage;
    char resp = 's';
    while (resp == 's' || resp == 'S') {
        std::cout << "1. Crear \n2. Simulacion" << endl;
        int op;
        int op1;
        std::cin >> op;
        switch (op) {
            case 1:{
                std::cout << "1. Arma \n2. Armadura \n3. Magia \n4. Shield" << endl;
                int mepisan;
                std::cin >> mepisan;
                switch (mepisan) {
                    case 1:{
                        std::cout << "Nombre" << endl;
                        std::cin >> nombre;
                        std::cout << "Damage" << endl;
                        std::cin >> damage;
                        std::cout << "1. Melee \n2. Ranged" << endl;
                        //int op1;
                        std::cin >> op1;
                        switch (op1) {
                            case 1:{
                                std::cout << "efectividad" << endl;
                                int efectividad;
                                std::cin >> efectividad;
                                arma.push_back(new Melee(nombre, damage, efectividad));
                                break;
                            }//fin case 2.1
                            case 2:{
                                std::cout << "range" << endl;
                                int range;
                                std::cin >> range;
                                arma.push_back(new Ranged(nombre, damage , range));
                                break;
                            }// fin case 2.2
                        }//Fin switch
                        break;
                    }// fin case 1.1
                    case 2:{
                        int peso,duracion;
                        std::cout << "Peso" << endl;
                        std::cin >> peso;
                        std::cout << "duracion" << endl;
                        std::cin >> duracion;
                        std::cout << "1. ArmaduraLiviana \n2. ArmaduraMedia \n 3. ArmaduraPesada" << endl;
                        //int op1;
                        std::cin >> op1;
                            switch (op1) {
                                case 1:{
                                    armadura.push_back(new ArmaduraLiviana(peso,duracion));
                                    break;
                                }//fin case 2.1
                                case 2:{
                                    armadura.push_back(new ArmaduraMedia(peso,duracion));
                                    break;
                                }// fin case 2.2
                                case 3:{
                                    armadura.push_back(new ArmaduraPesada(peso,duracion));
                                    break;
                                }//fin case 2.3
                            }
                            break;
                    }//fin case 1.2
                    case 3:{
                        std::cout << "Damage" <<endl;
                        int damage;
                        std::cin >> damage;
                        std::cout << "Tiempo de cast" << endl;
                        int Tiempo;
                        std::cin >> Tiempo;
                        std::cout << "1. Fire \n 2. Ice" <<endl;
                        std::cin >> op1;
                        switch (op1) {
                            case 1:{
                                std::cout << "Burn" << endl;
                                int burn;
                                std::cin >> burn;
                                magia.push_back(new Fire(damage, Tiempo,burn));
                                break;
                            }//fin case 2.1
                            case 2:{
                                int freeze;
                                std::cout << "Freeze" << endl;
                                std::cin >> freeze;
                                magia.push_back(new Ice(damage, Tiempo, freeze));
                                break;
                            }// fin case 2.2
                        }
                        break;
                    }//fin case 1.3
                    case 4:{
                        int duracion1, strength;
                        std::cout << "duracion" << endl;
                        std::cin >> duracion1;
                        std::cout << "strength" << endl;
                        std::cin >> strength;
                        std::cout << "1. MagicShield \n2. MetalShield\n3. WoodShield" << endl;
                        std::cin >> op1;
                        switch (op1) {
                            case 1:{
                                int reflect;
                                std::cout << "reflect" << endl;
                                std::cin >> reflect;
                                shield.push_back(new MagicShield(duracion1,strength,reflect));
                                break;
                            }//fin case 2.1
                            case 2:{
                                shield.push_back(new MetalShield(duracion1,strength));
                                break;
                            }// fin case 2.2
                            case 3:{
                                shield.push_back(new WoodShield(duracion1,strength));
                                break;
                            }//fin case 2.3
                        break;
                        }
                    }//fin case 1.4
                }//fin switch 1.1
                break;
            }//fin case 1
            case 2:{
                //Simulacion(benders);
                break;
            }
        }//fin switch
        std::cout << "Desea continuar S/N" << endl;
        std::cin >> resp;
    }//fin while

    return 0;
}//fin main


/*void Simulacion(vector<Bender*> v){
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
    }

}*/
