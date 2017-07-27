var_13: main.o Person.o
	g++ main.o Person.o -o var_13 -ggdb3

main.o: main.cpp Person.hpp
	g++ -c -std=gnu++11 main.cpp -ggdb3 -o main.o

Person.o: Person.cpp Person.hpp
	g++ -c -std=gnu++11 Person.cpp -ggdb3 -o Person.o
