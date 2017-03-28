#include <iostream>
#include "Carta.h"
#include "Monsters.h"
#include "Scoiatael.h"
#include "Nilfgaardians.h"
#include "NorthernRealms.h"
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void writem(vector<Monsters*>, string);
void writes(vector<Scoiatael*>, string);
void writen(vector<Nilfgaardians*>, string);
void writenr(vector<NorthernRealms*>, string);

string nombre;
int pot;



int main(){
    std::vector<Monsters*> m;
    std::vector<Scoiatael*> s;
    std::vector<Nilfgaardians*> n;
    std::vector<NorthernRealms*> nr;
    char resp = 's';

    while (resp == 's') {
        std::cout << "1. Agregar\n2.Guardar" << endl;
        int op;
        std::cin >> op;
        switch (op) {
            case 1:{
                std::cout << "1. Monsters\n2. Scoia'tael\n3. Nilfgaardians\n4. Northern Realms" << endl;
                int agregar;
                std::cin >> agregar;
                switch (agregar) {
                    case 1:{
                        std::cout << "Nombre, potencia" << endl;
                        cin>>nombre;
                        std::cin >> pot;
                        m.push_back(new Monsters(nombre, pot));
                        break;
                    }
                    case 2:{
                        std::cout << "Nombre, potencia" << endl;
                        cin>>nombre;
                        std::cin >> pot;
                        s.push_back(new Scoiatael(nombre, pot));
                        break;
                    }
                    case 3:{
                        std::cout << "Nombre, potencia" << endl;
                        cin>>nombre;
                        std::cin >> pot;
                        n.push_back(new Nilfgaardians(nombre, pot));
                        break;
                    }
                    case 4:{
                        std::cout << "Nombre, potencia" << endl;
                        cin>>nombre;
                        std::cin >> pot;
                        nr.push_back(new NorthernRealms(nombre, pot));
                        break;
                    }
                }
            }
            case 2:{
                writem(m, "Monsters");
                writes(s, "Scoia\'tael");
                writen(n, "Nilfgaardians");
                writenr(nr, "NorthernRealms");
            }
        }
    }
    return 0;
}


void writem(vector<Monsters*> v, string s ){
    stringstream ss;
    ss << s << ".txt";
    ofstream file;
    //string f = ss.str();
    file.open("Monsters.txt", ios_base::app);
    for (int i = 0; i < v.size(); i++) {
        file << v[i]->getNombre() << "," << v[i]->getValor() << ",";
    }
}

void writes(vector<Scoiatael*> v, string s){
    stringstream ss;
    ss << s << ".txt";
    ofstream file;
    //string f = ss.str();
    file.open("Scoia\'tael.txt", ios_base::app);
    for (int i = 0; i < v.size(); i++) {
        file << v[i]->getNombre() << "," << v[i]->getValor() << ",";
    }
}

void writen(vector<Nilfgaardians*> v, string s){
    stringstream ss;
    ss << s << ".txt";
    ofstream file;
    //string f = ss.str();
    file.open("Nilfgaardians.txt", ios_base::app);
    for (int i = 0; i < v.size(); i++) {
        file << v[i]->getNombre() << "," << v[i]->getValor() << ",";
    }
}


void writenr(vector<NorthernRealms*> v, string s){
    stringstream ss;
    ss << s << ".txt";
    ofstream file;
    //string f = ss.str();
    file.open("NorthernRealms.txt", ios_base::app);
    for (int i = 0; i < v.size(); i++) {
        file << v[i]->getNombre() << "," << v[i]->getValor() << ",";
    }
}
