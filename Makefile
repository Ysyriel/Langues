env : main.o Case.o Environnement.o
	g++ -g main.o Case.o Environnement.o -o env
	
Environnement.o : Environnement.cpp Environnement.h Case.h
	g++ -g -c -Wall  Environnement.cpp -o Environnement.o -std=c++11

Case.o : Case.cpp Case.h
	g++ -g -c -Wall  Case.cpp -o Case.o -std=c++11

main.o : main.cpp Case.cpp Case.h Environnement.cpp Environnement.h
	g++ -g -c -Wall main.cpp -o main.o -std=c++11

clean:
	rm -f *.o
