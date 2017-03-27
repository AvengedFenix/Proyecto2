#pragma once
#include "Carta.h"

class Nilfgaardians : public Carta{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Carta>(*this);
    }
private:

public:
  Nilfgaardians();
  Nilfgaardians(string, int);
  Nilfgaardians(int, int, string, int);


  void Attack(Carta*);

  void Especial(Carta*);

  virtual ~Nilfgaardians();
};
