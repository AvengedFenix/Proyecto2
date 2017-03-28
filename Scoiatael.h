<<<<<<< HEAD
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
=======
#pragma once
#include "Carta.h"

class Scoiatael : public Carta{
private:

public:
  Scoiatael();
  Scoiatael(string, int);
  Scoiatael(int, int, string, int);
  void Especial(Carta*);
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
