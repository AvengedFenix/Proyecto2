#pragma once
#include "Carta.h"

class NorthernRealms : public Carta{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Carta>(*this);
    }*/
private:

public:
  NorthernRealms();
  NorthernRealms(string, double);
  NorthernRealms(int, int, string, double);

  void Attack(Carta*);
  void Especial(Carta*);
  bool correr();
  void heal();

  virtual void setArma();
  virtual void setShield();
  virtual void setMagia();
  virtual void setArmadura();

  friend ostream& operator<<(ostream& out, const NorthernRealms& a){
        out << typeid(a).name() << "," << a.nombre << "," << a.valor << ",";
        return out;
  }

  virtual ~NorthernRealms();
};
