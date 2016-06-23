/*Nomes : Arthur Alexsander Martins Teodoro           Matrícula : 0022427*/
/*        Saulo Ricardo Dias Fernandes                Matrícula : 0021581*/
/*Data: 02/06/2016*/

#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"
#include "lista.h"
#include "caminho.h"

/*Funções com prototipos no .c com static porque nao é de interrese o usuario realizar a chamada de tais*/
static int PegaMenorNaoVisitado(Lista dis, Lista vi);
static void printaPai(Lista pa, int a, int b, Lista dist);

void Gcaminho(Grafo g, float *pesos, int a, int b)
{
	int i, vert, ares;
	Lista dist = criaLista();
	Lista vis = criaLista();
	Lista pai = criaLista();
	for(i = 1; i <= GInumeroVerticesMax(g); i++)
	{
		insereNaLista(dist,999999);
		insereNaLista(pai,1);
	}
	mudaValorLista(dist,a,0);
	while(!existeNaLista(vis,b))
	{
		vert = PegaMenorNaoVisitado(dist,vis);
		insereNaLista(vis,vert);
		for(ares = GAprimaSaida(g,vert); ares != 0; ares = GAproxSaida(g,vert,ares))
		{
      if((pegaValorLista(dist, GVvizinho(g,ares,vert))) > (pesos[ares] + pegaValorLista(dist, vert)))
        {
          mudaValorLista(dist, GVvizinho(g,ares,vert), (pesos[ares] + pegaValorLista(dist, vert)));
          mudaValorLista(pai, GVvizinho(g,ares,vert), vert);
        }  		
		}
	}
	printaPai(pai,a,b,dist);
	destroiLista(dist);
	destroiLista(vis);
	destroiLista(pai);
}

int PegaMenorNaoVisitado(Lista dis, Lista vi)
{
	float menor;
	int i, vert;
	menor = 999999999;
	for(i = 1; i <= tamanhoLista(dis); i++)
	{
		if((pegaValorLista(dis,i) < menor)&&(!existeNaLista(vi,i)))
		{
			menor = pegaValorLista(dis,i);
			vert = i;
		}
	}
	return vert;
}

void printaPai(Lista pa, int a, int b, Lista dist)
{
	int i = b;
	Lista aux = criaLista();
	if(pegaValorLista(dist,b) != 999999)
	{
		while(i != a)
		{
			insereInicioLista(aux,i);
			i = pegaValorLista(pa,i);
		}
		insereInicioLista(aux,a);
		printaLista(aux);
	}
	else
	{
		printf("%d\n", a);
	} 
}