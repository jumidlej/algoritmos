/**
Funções da minha lista
1. Criar lista vazia
2. Inserir elemento
3. Remover elemento
4. Consultar elemento
5. Excluir lista
*/
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista{
    int info;
    struct lista *prox;
};

/* 
cria uma lista vazia que aponta para NULL
retorna: endereço para um elemento da lista
*/
lista* cria_lista(){
    lista* no = (lista*) malloc(sizeof(lista));
    // deu certo a criação da lista
    if(no != NULL){
        // aponta para NULL (conteúdo recebe NULL)
        *no = NULL;
    }
    return no;
}

int lista_vazia(lista* inicio){
    if (inicio == NULL)
        return 1;
    if (*inicio == NULL)
        return 1;
    return 0;
}

lista* insere_inicio(lista* inicio, int valor){
    if (inicio!=NULL){
        lista* no = (lista*) malloc(sizeof(lista));
        no->info = valor;
        no->prox = inicio;
        return no;
    }
    return NULL;
}

lista* insere_final(){
    if (inicio!=NULL){
        lista* no = (lista*) malloc(sizeof(lista));
        no->info = valor;
        no->prox = NULL;
        if(*inicio == NULL){
            return no;
        }
        lista* aux=inicio;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox=no;
        return inicio;
    }
}

lista* insere_posicao(){

}

lista* consulta_elemento(){

}

/*
recebe: elemento do inicio da lista
retorna: tamanho da lista
*/
int tamanho_lista(lista* inicio){
    int tamanho=0;
    lista* aux=inicio;
    while(aux!=NULL){
        aux = inicio->prox;
        tamanho++;
    }
    return tamanho;
}

lista* remove_inicio(){

}

lista* remove_final(){

}

lista* remove_elemento(){

}

// libera lista criada
void libera_lista(lista* inicio){
    if(inicio!=NULL){
        lista* aux;
        while(*inicio!=NULL){
            aux = inicio;
            inicio = inicio->prox;
            free(aux);
        }
    }
}