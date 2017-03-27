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
