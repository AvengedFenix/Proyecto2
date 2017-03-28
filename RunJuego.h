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
#include "Jugador.h"
#include <ncurses.h>
#include <iostream>
#include <vector>
#include <typeinfo>
#include <string.h>
#include <cstdarg>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <typeinfo>
#include <sys/stat.h>


using namespace std;


class RunJuego {
private:
  /* data */

public:
  RunJuego();
  int run();
  void guardar(vector<Carta*>);
  vector<Carta*> leer();

  virtual ~RunJuego();
};
