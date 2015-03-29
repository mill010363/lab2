main: h2.o main.o
	g++ -o main main.o h2.o

h2.o: h2.cpp h2.h
	g++ -c h2.cpp

main.o: main.cpp h2.h
	g++ -c main.cpp

clean:
	rm main *.o
