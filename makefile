complex: main.o
	g++ -o complex main.o

main.o: complexNumber.h main.cpp
	g++ -c main.cpp

clean:
	rm *.o complex;