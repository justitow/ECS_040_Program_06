FileFind.out : main.o list.o directory.o
	g++ -Wall -ansi -g -o FileFind.out main.o list.o directory.o

main.o : main.cpp list.h directory.h
	g++ -ansi -Wall -g -c main.cpp

directory.o : directory.cpp
	g++ -ansi -Wall -g -c directory.cpp

list.o : list.cpp
	g++ -ansi -Wall -g -c list.cpp

clean : 
	rm -f FileFind.out *.o
