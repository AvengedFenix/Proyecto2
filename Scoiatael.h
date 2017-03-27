#pragma once
#include "Carta.h"

class Scoiatael : public Carta{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Carta>(*this);
    }
private:

public:
  Scoiatael();
  Scoiatael(string, int);
  Scoiatael(int, int, string, int);
  void Attack(Carta*);
  void Especial(Carta*);
};
