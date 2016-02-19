FileFind.out : main.o list.o directory.o
	g++ -Wall -ansi -g -o FileFind.out main.o directory.o

main.o : main.cpp list.h list.cpp directory.h
	g++ -ansi -Wall -g -c main.cpp

directory.o : directory.cpp
	g++ -ansi -Wall -g -c directory.cpp

clean : 
	rm -f FileFind.out *.o
