#include <stdio.h>
#include <stdlib.h>

typedef struct pilha pilha;
struct pilha{
	int info;
	pilha *prox;
};
pilha *criarPilha();
pilha *inserirElemento(pilha *lista, int n);
pilha *removerElemento(pilha *lista);
void mostrarElemento(pilha *lista);
pilha *buscarElemento(pilha *lista,int n);
void mostrarTopoDaPilha(pilha *lista);
pilha *liberarPilha(pilha *lista);

