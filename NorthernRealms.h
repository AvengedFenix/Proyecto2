<<<<<<< HEAD
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
=======
#pragma once
#include "Carta.h"

class NorthernRealms : public Carta{
private:

public:
  NorthernRealms();
  NorthernRealms(string, int);
  NorthernRealms(int, int, string, int);
  void Especial(Carta*);
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
