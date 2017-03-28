<<<<<<< HEAD
#pragma once

#include "Shield.h"

class MetalShield : public Shield{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Shield>(*this);
    }*/
private:
public:
  MetalShield();
  MetalShield(int, int);

  friend ostream& operator<<(ostream& out, const MetalShield& a){
        out << typeid(a).name() << "," << a.duracion << "," << a.strength << ",";
        return out;
  }

  virtual ~MetalShield();
};
=======
#pragma once

#include "Shield.h"

class MetalShield : public Shield{
private:
public:
  MetalShield();
  MetalShield(int, int);



  virtual ~MetalShield();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
