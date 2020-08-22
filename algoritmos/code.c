#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int escolhido;
    int x;
    int y;
} ponto;

int cmpfunc (const void * a, const void * b) {
   return ((*(ponto*)a).x - (*(ponto*)b).x);
}

int main(){
    int n, i, camada;
    ponto p[2000];

    scanf("%d", &n);
    while(n!=0){
        for(i=0;i<n;i++){
            scanf("%d%d", &p[i].x, &p[i].y);
            p[i].escolhido=0;
        }
        
        qsort(p, n, sizeof(ponto), cmpfunc);
        
        // encontrar os 2 extremos e construir a envoltória com base nos angulos de 3 em 3 pontos
        // a gente vai construir em duas partes, o que tiver acima ou abaixo da reta formado pelos extremos
        // os extremos são obrigatoriamente pontos da envoltoria
        camada = 0;
        p[camada].escolhido = 1;
        p[n-1-camada].escolhido = 1;
        for(i=1;i<n;i++){
            // equação da reta formada pelos extremos
            m = abs(p[camada].y-p[n-1-camada].y)/abs(p[camada].x-p[n-1-camada].x);
            // verifica de qual lado o ponto
            // se for igual não precisa olhar (colinear)
            if(p[i].y>p[i].x*m){
            
            }
            else if(p[i].y<p[i].x*m){

            }
        }

        scanf("%d", &n);   
    }

    return 0;
}
