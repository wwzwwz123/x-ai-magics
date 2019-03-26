main : main.o test.o
	g++ main.o test.o -o main 
main.o : main.cpp 
	g++ -c main.cpp
test.o : test.cpp
	g++ -c test.cpp
clean:
	rf -rm *.o

