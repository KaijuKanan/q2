complex: complexNumber.o main.o
	g++ -o complex complexNumber.o main.o

main.o: complexNumber.h main.cpp
	g++ -c main.cpp

complexNumber.o: complexNumber.h complexNumber.cpp
	g++ -c complexNumber.cpp

clean:
	rm *.o complex;