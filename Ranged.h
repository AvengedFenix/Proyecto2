#pragma once

#include "Arma.h"

class Ranged : public Arma{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Arma>(*this);
        ar & range;
    }
private:
  int range;
public:
  Ranged();
  Ranged(string, int, int);
  int getRange();

  virtual ~Ranged();

};
