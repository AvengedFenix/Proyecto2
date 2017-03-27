#pragma once

#include <vector>
#include <string>
#include <boost/serialization/vector.hpp>

#include "Carta.h"
#include "Nilfgaardians.h"
#include "NorthernRealms.h"
#include "Monsters.h"
#include "Scoiatael.h"

class g_cartas{
  friend class boost::serialization::access;
private:
  vector<Carta*> cartas;

public:
  g_cartas();
  void addCarta(Carta*);
  Carta* getCarta(int);

  int sizeVector();

  template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar.register_type(static_cast<Nilfgaardians*>(NULL));
        ar.register_type(static_cast<NorthernRealms*>(NULL));
        ar.register_type(static_cast<Monsters*>(NULL));
        ar.register_type(static_cast<Scoiatael*>(NULL));

        ar & cartas;

    }
};
