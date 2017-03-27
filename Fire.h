#pragma once

#include "Magia.h"

class Fire : public Magia{
  friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Magia>(*this);
        ar & burndamage;
    }
private:
  int burndamage;
public:
  Fire();
  Fire(int, int, int);

  int getBurnDamage();

  virtual ~Fire();


};
