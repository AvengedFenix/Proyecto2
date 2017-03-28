#pragma once

#include <string>
#include <iostream>
using namespace std;

class Carta{
private:
  int posx;
  int posy;
  string nombre;
  int valor;

  Arma* weapon;
  Shield* escudo;
  Magia* magia;//magia la usamos para ataque especial

public:
  Carta();
  Carta(string, int);
  Carta(int, int, string, int);

  virtual int getX();
  virtual int getY();
  virtual string getNombre();
  virtual int getValor();

  virtual void setX(int);
  virtual void setY(int);
  virtual void setNombre(string);
  virtual void setValor(int);

  void setArma(Arma*);
  void setShield(Shield*);
  void setMagia(Magia*);

  Arma* getArma();
  Shield* getShield();
  Magia* getMagia();

  virtual void Attack(Carta*);
  virtual void Especial(Carta*);
  virtual ~Carta();

  friend ostream& operator<<(ostream& out, const Carta& a){
     out <<a.posx<<","<<a.posy<<","<< a.nombre<<","<<a.valor << ", " << a.weapon -> getNombre()
     << ", " << a.weapon -> getDamage() << ", "
     << a.escudo -> getDuracion() << ", " << a.escudo -> getStrength() << ", "
     << a.magia -> getDamage() << ", " << a.magia -> getTiempo() << endl;
     return out;
  }

  friend istream& operator>>(istream& in, Alumno& a){
    // char buffer[256];
    string buffer;
    getline(in,buffer);



     string split[10];
     int str=0;

     for(int i=0;i<buffer.size();i++){
       if(buffer[i]!=','){
             split[str].append(buffer,i,1);

        }else{
             str++;
        }
     }


     a.posx=split[0];
     a.posy=split[1];
     a.nombre=split[2];
     a.valor=split[3];

     int weaponNombre = split[4];
     int weaponDamage = split[5];

     a.weapon = new Arma(weaponNombre, weaponDamage);

     int duracion = split[6];
     int strength = spilt[7];

     a.escudo = new Shield(duracion, strength);

     int MagicDamage = split[8];
     int MagicTime = split[9];

     a.magia = new Magia(MagicDamage, MagicTime);

     return in;
   }




};
