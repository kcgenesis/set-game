CC = g++
CFLAGS = -c -Wall

playSet.exe: playSet.o board.o deck.o card.o
	$(CC) playSet.o board.o deck.o card.o -o playSet.exe
 

playSet.o: playSet.cpp 
	$(CC) $(CFLAGS) playSet.cpp

board.o: board.cpp board.h
	$(CC) $(CFLAGS) board.cpp

deck.o: deck.cpp deck.h
	$(CC) $(CFLAGS) deck.cpp

card.o: card.cpp card.h
	$(CC) $(CFLAGS) card.cpp

debug: 
	$(CC) -g -o playSetDebug.exe playSet.cpp board.cpp

clean:
	rm *.exe *.o *.stackdump *~

backup:
	test -d backups || mkdir backups
	cp *.cpp backups
	cp *.h backups
