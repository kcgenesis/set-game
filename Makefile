set.exe: set.o board.o
	g++ -o set.exe set.o board.o

set.o: board.cpp board.h
	g++ -c set.cpp

board.o: board.cpp board.h
	g++ -c board.cpp

debug: 
	g++ -g -o setDebug.exe set.cpp board.cpp

clean:
	rm *.exe *.o *.stackdump *~

backup:
	test -d backups || mkdir backups
	cp *.cpp backups
	cp *.h backups