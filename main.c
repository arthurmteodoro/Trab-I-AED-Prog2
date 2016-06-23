#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"
#include "caminho.h"
#include "lista.h"

int main(int argc, char const *argv[])
{
	Grafo g;
	/*===Grafo 01=============
	float vet[10];
	vet[1] = 10;
	vet[2] = 5;
	vet[3] = 8;
	vet[4] = 3;
	vet[5] = 7;
	vet[6] = 4;
	vet[7] = 3;
	vet[8] = 10;
	vet[9] = 7;

 g = GGcarregaGrafo("grafo.txt");

  Gcaminho(g,vet,1,6);
  =============================*/
  float vet[33];
	vet[1] = 12;
	vet[2] = 15;
	vet[3] = 7;
	vet[4] = 5;
	vet[5] = 13.5;
	vet[6] = 21;
	vet[7] = 23;
	vet[8] = 40;
	vet[9] = 23.5;
	vet[10] = 23;
	vet[11] = 31;
	vet[12] = 18;
	vet[13] = 25;
	vet[14] = 19.5;
	vet[15] = 13.7;
	vet[16] = 27;
	vet[17] = 11.6;
	vet[18] = 23;
	vet[19] = 31;
	vet[20] = 10;
	vet[21] = 41;
	vet[22] = 33.6;
	vet[23] = 29;
	vet[24] = 22;
	vet[25] = 36;
	vet[26] = 14;
	vet[27] = 17;
	vet[28] = 16;
	vet[29] = 19.9;
	vet[30] = 15;
	vet[31] = 7;
	vet[32] = 9;

 g = GGcarregaGrafo("grafo03.txt");

  Gcaminho(g,vet,1,22);

  GGdestroiGrafo(g);
	return 0;
}
