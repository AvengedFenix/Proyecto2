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
