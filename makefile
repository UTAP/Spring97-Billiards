a.out: main.o billiards.o interface.o
	g++ main.o billiards.o interface.o
main.o: main.cpp
	g++ -c main.cpp
billiards.o: billiards.cpp
	g++ -c billiards.cpp
interface.o: interface.cpp
	g++ -c interface.cpp
