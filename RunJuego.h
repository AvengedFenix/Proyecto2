#include "Arma.h"
#include "Armadura.h"
#include "ArmaduraLiviana.h"
#include "ArmaduraMedia.h"
#include "ArmaduraPesada.h"
#include "Carta.h"
#include "NorthernRealms.h"
#include "Scoiatael.h"
#include "Monsters.h"
#include "Nilfgaardians.h"
#include "Fire.h"
#include "Ice.h"
#include "Magia.h"
#include "MagicShield.h"
#include "Melee.h"
#include "MetalShield.h"
#include "Ranged.h"
#include "Shield.h"
#include "WoodShield.h"
#include <ncurses>
#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;


class RunJuego {
private:
  /* data */

public:
  RunJuego();
  int run();
  void guardar(vector<Carta*>);
  vector<Carta*> leer();

  virtual ~Run ();
};
