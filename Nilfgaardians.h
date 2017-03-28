<<<<<<< HEAD
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
=======
#pragma once
#include "Carta.h"

class Nilfgaardians : public Carta{
private:
  Arma* weapon;
  Shield* escudo;

public:
  Nilfgaardians();
  Nilfgaardians(string, int);
  Nilfgaardians(int, int, string, int);


  virtual void Attack(Carta*);

  void Especial(Carta*);

  virtual ~Nilfgaardians();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
