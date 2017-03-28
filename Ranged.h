<<<<<<< HEAD
#pragma once

#include "Arma.h"

class Ranged : public Arma{
  /*friend class boost::serialization::access;
  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<Arma>(*this);
        ar & range;
    }*/
private:
  int range;
public:
  Ranged();
  Ranged(string, int, int);
  int getRange();


    friend ostream& operator<<(ostream& out, const Ranged& a){
          out << typeid(a).name() << "," << a.nombre << "," << a.damage << "," << a.range << ",";
          return out;
    }


  virtual ~Ranged();

};
=======
#pragma once

#include "Arma.h"

class Ranged : public Arma{
private:
  int range;
public:
  Ranged();
  Ranged(string, int, int);
  int getRange();
  ~Ranged();
};
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
