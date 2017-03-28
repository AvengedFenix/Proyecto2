#pragma once
#include "Carta.h"

class Nilfgaardians : public Carta{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Carta>(*this);
    }*/
private:

public:
  Nilfgaardians();
  Nilfgaardians(string, double);
  Nilfgaardians(int, int, string, double);

  virtual void setArma();
  virtual void setShield();
  virtual void setMagia();
  virtual void setArmadura();

  void Attack(Carta*);

  void Especial(Carta*);

  bool correr();

  void heal();


  friend ostream& operator<<(ostream& out, const Nilfgaardians& a){
        out << typeid(a).name() << "," << a.nombre << "," << a.valor << ",";
        return out;
  }

  virtual ~Nilfgaardians();
};
