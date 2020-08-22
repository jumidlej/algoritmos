#include <iostream>
 
using namespace std;
 
typedef struct {
    int escolhido;
    int x;
    int y;
} ponto;

int cmpfunc (const void * a, const void * b) {
   return ((*(ponto*)a).x - (*(ponto*)b).x);
}

int envoltoria()

int main(){
    int n, i, camada;
    ponto p[2000];
    list<ponto> acima;
    list<ponto> abaixo;

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
        // acho que não pode usar o abs não
        camada = 0;
        p[camada].escolhido = 1;
        acima.push_front(p[camada]);
        abaixo.push_front(p[camada]);
        p[n-1-camada].escolhido = 1;
        for(i=1;i<n-camada;i++){
            if(p[i].escolhido==0){
                // equação da reta formada pelos extremos
                m = abs(p[camada].y-p[n-1-camada].y)/abs(p[camada].x-p[n-1-camada].x);
                // verifica de qual lado o ponto
                // se for igual não precisa olhar (colinear) com os extremos
                if(p[i].y>p[i].x*m){
                    if(acima.size()==1){
                        acima.push_front(p[i]);
                    }
                    else{
                        for (list<ponto>::iterator i = acima.begin(), end = acima.end()-1; i != end; ++i){
                            m = abs(*(i+1).y-p[i].y)/abs(*(i+1).x-p[i].x);
                            // se o ponto anterior tiver abaixo da reta, tira ele
                            if((*i).y < (*i).x*m)
                            { 
                                acima.pop_front();
                            }
                            else
                                break;
                        }
                        // insere o ultimo ponto que a gente viu
                    }
                }
                else if(p[i].y<p[i].x*m){
                    if(abaixo.size()==1){
                        abaixo.push_front(p[i]);
                    }
                    else{
                        for (list<ponto>::iterator i = abaixo.begin(), end = abaixo.end()-1; i != end; ++i){
                            m = abs(*(i+1).y-p[i].y)/abs(*(i+1).x-p[i].x);
                            // se o ponto anterior tiver acima da reta, tira ele
                            if((*i).y > (*i).x*m)
                            { 
                                abaixo.pop_front();
                            }
                            else
                                break;
                        }
                        // insere o ultimo ponto que a gente viu
                        // lembrar de fazer a verificação com o ponto extremo do final, importante
                    }
                }
            }
        }

        scanf("%d", &n);   
    }

    return 0;
}