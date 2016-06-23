all:
	gcc -Wall -o grafo.o -c grafo.c
	gcc -Wall -o caminho.o -c caminho.c
	gcc -Wall -o lista.o -c lista.c
	gcc -Wall -o main grafo.o caminho.o lista.o main.c

run:
	./main
