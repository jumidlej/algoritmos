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
    int dado;
    struct lista *prox;
};

lista* cria_lista(){
    lista* no = (lista*) malloc(sizeof(lista));
    if (no!=NULL)
        return no;
}

lista* insere_inicio(){

}

lista* insere_final(){

}

lista* insere_posicao(){

}

lista* consulta_elemento(){

}

lista* remove_inicio(){

}

lista* remove_final(){

}

lista* remove_elemento(){

}

void deleta_lista(){

}