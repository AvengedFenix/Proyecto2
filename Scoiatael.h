#pragma once
#include "Carta.h"

class Scoiatael : public Carta{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Carta>(*this);
    }*/
private:

public:
  Scoiatael();
  Scoiatael(string, double);
  Scoiatael(int, int, string, double);
  void Attack(Carta*);
  void Especial(Carta*);
  bool correr();
  void heal();

  virtual void setArma();
  virtual void setShield();
  virtual void setMagia();
  virtual void setArmadura();

  virtual ~Scoiatael();

  friend ostream& operator<<(ostream& out, const Scoiatael& a){
        out << typeid(a).name() << "," << a.nombre << "," << a.valor << ",";
        return out;
  }
};
