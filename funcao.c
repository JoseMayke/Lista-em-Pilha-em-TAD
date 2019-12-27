#include "funcao.h"

pilha *criarPilha(){
	return NULL;
}

pilha *liberarPilha(pilha *lista){
	if(lista!=NULL){
		pilha *i;
		while(lista!=NULL){
			i=lista;
			lista=lista->prox;
			free(i);
		}
		free(lista);
		lista=NULL;
		i=NULL;
	}
	return lista;
}

void mostrarElemento(pilha *lista){
	if(lista!=NULL){
		pilha *i;
		i=lista;
		printf("OS ELEMENTOS DA LISTA SAO:\n");
		while(i!=NULL){
			printf("%d  ",i->info);
			i=i->prox;
		}
		printf("\n");
	}else{
		printf("LISTA VAZIA!\n");
	}
}

pilha *inserirElemento(pilha *lista, int n){
	pilha *novo;
	novo=(pilha*)malloc(sizeof(pilha));
	novo->info=n;
	novo->prox=lista;
	printf("NUMERO INSERIDO!\n");
	return novo;
}

pilha *removerElemento(pilha *lista){
	if(lista!=NULL){
		pilha *aux;
		aux=lista;
		lista=lista->prox;
		free(aux);
		aux=NULL;
		printf("NUMERO REMOVIDO!\n");
	}else{
		printf("LISTA VAZIA!\n");
	}
	return lista;
}

pilha *buscarElemento(pilha *lista,int n){
	if(lista!=NULL){
		pilha *i;
		for(i=lista;i!=NULL;i=i->prox){
			if(n==i->info)
				return i;
		}
	}else{
	printf("LISTA VAZIA!\n");
	}
	return NULL;
}

void mostrarTopoDaPilha(pilha *lista){
	if(lista!=NULL){
		printf("TOPO DA PILHA EH %d\n", lista->info);
	}else{
		printf("LISTA VAZIA!\n");
	}
}