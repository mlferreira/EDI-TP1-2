nome = tp1ex2

all:
	g++ -o $(nome) src/main.cpp 

clean:
	-rm -f *.o *~

run:
	./$(nome)

teste:
	./$(nome) < test/entrada.txt