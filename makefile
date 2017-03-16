Proyecto: notmain.o Carta.o Nilfgaardians.o Monsters.o NorthernRealms.o Scoiatael.o Deck.o Jugador.o
	g++ notmain.o Carta.o Nilfgaardians.o Monsters.o NorthernRealms.o Scoiatael.o Deck.o Jugador.o -o Proyecto

notmain.o: notmain.cpp Carta.h Deck.h Nilfgaardians.h Monsters.h NorthernRealms.h Scoiatael.h
	g++ -c notmain.cpp

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

Deck.o: Deck.cpp Deck.h Carta.h
	g++ -c Deck.cpp

Jugador.o: Jugador.cpp Jugador.h Deck.h
	g++ -c Jugador.cpp

clean:
	rm *.o Proyecto
