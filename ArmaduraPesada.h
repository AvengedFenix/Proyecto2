<<<<<<< HEAD
#pragma once

#include "Armadura.h"

class ArmaduraPesada : public Armadura{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Armadura>(*this);
    }*/
public:
  ArmaduraPesada();
  ArmaduraPesada(int, int);
  virtual ~ArmaduraPesada();
};
=======
#pragma once

#include "Armadura.h"

class ArmaduraPesada : public Armadura{
public:
  ArmaduraPesada();
  ArmaduraPesada(int, int);
  virtual ~ArmaduraPesada();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
