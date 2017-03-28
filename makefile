<<<<<<< HEAD
Proyecto: main.o Carta.o Nilfgaardians.o Monsters.o NorthernRealms.o Scoiatael.o Deck.o Jugador.o Arma.o Melee.o Ranged.o Armadura.o ArmaduraLiviana.o ArmaduraMedia.o ArmaduraPesada.o Magia.o Fire.o Ice.o Shield.o MagicShield.o WoodShield.o MetalShield.o g_cartas.o
	g++ main.o Carta.o Nilfgaardians.o Monsters.o NorthernRealms.o Scoiatael.o Deck.o Jugador.o Arma.o Melee.o Ranged.o Armadura.o ArmaduraLiviana.o ArmaduraMedia.o ArmaduraPesada.o Magia.o Fire.o Ice.o Shield.o MagicShield.o WoodShield.o MetalShield.o g_cartas.o -lboost_serialization -o Proyecto

main.o: main.cpp Jugador.h Carta.h Deck.h Nilfgaardians.h Monsters.h NorthernRealms.h Scoiatael.h Arma.h Melee.h Ranged.h Armadura.h ArmaduraLiviana.h ArmaduraMedia.h ArmaduraPesada.h Magia.h Fire.h Ice.h Shield.h MagicShield.h WoodShield.h MetalShield.h
	g++ -c main.cpp

Carta.o: Carta.cpp Carta.h
	g++ -c Carta.cpp

Nilfgaardians.o: Nilfgaardians.cpp Nilfgaardians.h
	g++ -c Nilfgaardians.cpp

Monsters.o: Monsters.cpp Monsters.h
	g++ -c Monsters.cpp

NorthernRealms.o: NorthernRealms.cpp NorthernRealms.h
	g++ -c NorthernRealms.cpp

Scoiatael.o: Scoiatael.cpp Scoiatael.h
	g++ -c Scoiatael.cpp

Deck.o: Deck.cpp Deck.h
	g++ -c Deck.cpp

Jugador.o: Jugador.cpp Jugador.h
	g++ -c Jugador.cpp

Arma.o: Arma.cpp Arma.h
	g++ -c Arma.cpp

Melee.o: Melee.cpp Melee.h
	g++ -c Melee.cpp

Ranged.o: Ranged.cpp Ranged.h
	g++ -c Ranged.cpp

Armadura.o: Armadura.cpp Armadura.h
	g++ -c Armadura.cpp

ArmaduraLiviana.o: ArmaduraLiviana.cpp ArmaduraLiviana.h
	g++ -c ArmaduraLiviana.cpp

ArmaduraMedia.o: ArmaduraMedia.cpp ArmaduraMedia.h
	g++ -c ArmaduraMedia.cpp

ArmaduraPesada.o: ArmaduraPesada.cpp ArmaduraPesada.h
	g++ -c ArmaduraPesada.cpp

Magia.o: Magia.cpp Magia.h
	g++ -c Magia.cpp

Fire.o: Fire.cpp Fire.h
	g++ -c Fire.cpp

Ice.o: Ice.cpp Ice.h
	g++ -c Ice.cpp

Shield.o: Shield.cpp Shield.h
	g++ -c Shield.cpp

MagicShield.o: MagicShield.cpp MagicShield.h
	g++ -c MagicShield.cpp

MetalShield.o: MetalShield.cpp MetalShield.h
	g++ -c MetalShield.cpp

WoodShield.o: WoodShield.cpp WoodShield.h
	g++ -c WoodShield.cpp

g_cartas.o: g_cartas.cpp g_cartas.h
	g++ -c g_cartas.cpp

clean:
	rm *.o Proyecto
=======
Creando:	main.o Arma.o Armadura.o ArmaduraLiviana.o ArmaduraMedia.o ArmaduraPesada.o Fire.o Ice.o Magia.o MagicShield.o Melee.o MetalShield.o Ranged.o Shield.o WoodShield.o
		g++ main.o Arma.o Armadura.o ArmaduraLiviana.o ArmaduraMedia.o ArmaduraPesada.o Fire.o Ice.o Magia.o MagicShield.o Melee.o MetalShield.o Ranged.o Shield.o WoodShield.o -o Creando

main.o:		main.cpp Arma.cpp Armadura.cpp ArmaduraLiviana.cpp ArmaduraMedia.cpp ArmaduraPesada.cpp Fire.cpp Ice.cpp Magia.cpp MagicShield.cpp Melee.cpp MetalShield.cpp Ranged.cpp Shield.cpp WoodShield.cpp
		g++ -c main.cpp

Arma.o: 	Arma.cpp Arma.h Ranged.h Melee.h
		g++ -c Arma.cpp

Armadura.o:	Armadura.cpp Armadura.h ArmaduraLiviana.h ArmaduraMedia.h ArmaduraPesada.h
		g++ -c Armadura.cpp

Magia.o:	Magia.cpp Magia.h Fire.h Ice.h
		g++ -c Magia.cpp

Shield.o:	Shield.cpp Shield.h MagicShield.h MetalShield.h WoodShield.h
		g++ -c Shield.cpp

Ranged.o:	Ranged.cpp Ranged.h Arma.h
		g++ -c Ranged.cpp

Melee.o:	Melee.cpp Melee.h Arma.h
		g++ -c Melee.cpp

ArmaduraLiviana.o:	ArmaduraLiviana.cpp ArmaduraLiviana.h Armadura.h
		g++ -c ArmaduraLiviana.cpp

ArmaduraMedia.o:	ArmaduraMedia.cpp ArmaduraMedia.h Armadura.h
		g++ -c ArmaduraMedia.cpp

ArmaduraPesada.o:	ArmaduraPesada.cpp ArmaduraPesada.h Armadura.h
		g++ -c ArmaduraPesada.cpp

Fire.o:	Fire.cpp Fire.h Magia.h
		g++ -c Fire.cpp

Ice.o:	Ice.cpp Ice.h Magia.h
		g++ -c Ice.cpp

MagicShield.o:	MagicShield.cpp MagicShield.h Shield.h
		g++ -c MagicShield.cpp

MetalShield.o:	MetalShield.cpp MetalShield.h Shield.h
		g++ -c MetalShield.cpp

WoodShield.o:	WoodShield.cpp WoodShield.h Shield.h
		g++ -c WoodShield.cpp

clean:
	rm *.o Creando
>>>>>>> 8cc38a4f5d0fb86bc813a0e81fbe22b9f2b753fb
