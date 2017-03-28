#pragma once
#include "Carta.h"

class Monsters : public Carta{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Carta>(*this);
    }*/
private:

public:
  Monsters();
  Monsters(string, double);
  Monsters(int, int, string, double);



  virtual void setArma();
  virtual void setShield();
  virtual void setMagia();
  virtual void setArmadura();

  void Attack(Carta*);
  void Especial(Carta*);
  bool correr();
  void heal();


  virtual ~Monsters();

  /*friend ostream& operator<<(ostream& out, const Monsters& a){
     out << "Monsters," << a.posx<<","<<a.posy<<","<< a.nombre<<","<<a.valor << ", ";

     if(typeid(*a.weapon).name() == typeid(Ranged).name()){
       out << "Ranged," << a.weapon -> getNombre() << "," << a.weapon -> getDamage() << ","
       << ((Ranged)a.weapon) -> getRange() << "," ;
     }
     /*<< a.weapon -> getNombre()
     << ", " << a.weapon -> getDamage() << ", "
     << a.escudo -> getDuracion() << ", " << a.escudo -> getStrength() << ", "
     << a.magia -> getDamage() << ", " << a.magia -> getTiempo() << endl;
     return out;
  }

  friend istream& operator>>(istream& in, Monsters& a){
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


     a.posx=atoi(split[0].c_str());
     a.posy=atoi(split[1].c_str());
     a.nombre=split[2];
     a.valor=atoi(split[3].c_str());

     string weaponNombre = split[4];
     int weaponDamage = atoi(split[5].c_str());

     a.weapon = new Arma(weaponNombre, weaponDamage);

     int duracion = atoi(split[6].c_str());
     int strength = atoi(split[7].c_str());
     a.escudo = new Shield(duracion, strength);

     int MagicDamage = atoi(split[8].c_str());
     int MagicTime = atoi(split[9].c_str());

     a.magia = new Magia(MagicDamage, MagicTime);

     return in;
   }*/


     friend ostream& operator<<(ostream& out, const Monsters& a){
           out << typeid(a).name() << "," << a.nombre << "," << a.valor << ",";
           return out;
     }


};
