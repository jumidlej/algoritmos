#include <iostream>
#include <list>

using namespace std;

typedef struct {
    bool visitado;
    list<int> lista_adj;
} lista;

int busca_profundidade(lista l[401], int a, int b){
    list<int> fila;
    int aux;

    for (int i=0;i<401;i++)
        l[i].visitado = false;

    for (list<int>::const_iterator iterator = l[a].lista_adj.begin(), end = l[a].lista_adj.end(); iterator != end; ++iterator){
        fila.push_front(*iterator);
        // cout << "Adicoes " << *iterator << endl;
    }
    l[a].visitado = true;
    for (list<int>::iterator i_fila = fila.begin(), end = fila.end(); i_fila != end; ++i_fila){
        l[*i_fila].visitado = true;
        if(*i_fila==b)
            return 1;
        for (list<int>::const_iterator i = l[*i_fila].lista_adj.begin(), end = l[*i_fila].lista_adj.end(); i != end; ++i){
            if (l[*i].visitado == false){
                // cout << "Adicoes " << *i << endl;
                fila.push_back(*i);
            }
        }
    }
    fila.erase(fila.begin(),fila.end());
    return 0;
}

int main(){
    int n, m, p;
    int i, j, a, b;
    lista l[401];

    cin >> n >> m >> p;

    for(i=0;i<m;i++){
        cin >> a >> b;
        l[a].lista_adj.push_front(b);
        l[b].lista_adj.push_front(a);
    }

    for(i=0;i<p;i++){
        cin >> a >> b;
        if (busca_profundidade(l, a, b))
            cout << "Lets que lets" << endl;
        else
            cout << "Deu ruim" << endl;
    }

    for(i=0;i<m;i++){
        l[i].lista_adj.erase(l[i].lista_adj.begin(), l[i].lista_adj.end());
    }

    return 0;
}