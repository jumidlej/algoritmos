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
    lista no = (lista) malloc(sizeof(lista));

}

void deleta_lista(){

} 