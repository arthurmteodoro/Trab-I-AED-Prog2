/*Nomes : Arthur Alexsander Martins Teodoro           Matrícula : 0022427*/
/*        Saulo Ricardo Dias Fernandes                Matrícula : 0021581*/
/*Data: 10/05/2016*/

/*======================================================================================*/
/*=======================================GRAFO.H========================================*/
/*======================================================================================*/

#ifndef _GRAFO_H_
#define _GRAFO_H_

/*======================================================================================*/
/*====================================ESTRUTURA=CRIADA==================================*/
typedef struct grafo *Grafo;
/*======================================================================================*/

/*======================================================================================*/
/*====================================OPERACOES=CRIADAS=================================*/
extern Grafo GGcriaGrafo(int v, int a);
extern Grafo GGdestroiGrafo(Grafo p);
extern int GVcriaVertice(Grafo p);
extern int GAcriaAresta(Grafo p, int v1, int v2);
extern int GBexisteIdVertice(Grafo p, int v);
extern int GBexisteIdAresta(Grafo p, int a);
extern int GBexisteArestaDir(Grafo p, int v1, int v2);
extern int GBexisteAresta(Grafo p, int v1, int v2);
extern int GApegaArestaDir(Grafo p, int v1, int v2);
extern int GApegaAresta(Grafo p, int v1, int v2);
extern int GVprimeiroVertice(Grafo p);
extern int GVproximoVertice(Grafo p, int v1);
extern int GAprimeiraAresta(Grafo p);
extern int GAproximaAresta(Grafo p, int a1);
extern int GInumeroVertices(Grafo p);
extern int GInumeroVerticesMax(Grafo p);
extern int GInumeroArestas(Grafo p);
extern int GInumeroArestasMax(Grafo p);
extern Grafo GGcarregaGrafo(char *f);
extern int GBsalvaGrafo(Grafo p, char *f);
extern int GIpegaGrau(Grafo p, int v);
extern int GAprimaAresta(Grafo p, int v);
extern int GAproxAresta(Grafo p, int v, int a1);
extern int GAprimaEntrada(Grafo p, int v);
extern int GAproxEntrada(Grafo p, int v, int a1);
extern int GAprimaSaida(Grafo p, int v);
extern int GAproxSaida(Grafo p, int v, int a1);
extern int GBarestaLaco(Grafo p, int a);
extern int GValfa(Grafo p, int a);
extern int GVomega(Grafo p, int a);
extern int GVvizinho(Grafo p, int a, int v1);
/*======================================================================================*/

#endif