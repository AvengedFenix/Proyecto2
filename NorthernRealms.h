#pragma once
#include "Carta.h"

class NorthernRealms : public Carta{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Carta>(*this);
    }
private:

public:
  NorthernRealms();
  NorthernRealms(string, int);
  NorthernRealms(int, int, string, int);

  void Attack(Carta*);
  void Especial(Carta*);
};
