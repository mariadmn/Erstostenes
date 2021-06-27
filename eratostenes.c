#include <stdio.h>
#include <stdlib.h>
#include "union_find.h"

int main(int argc, char const *argv[]){
    int N = 1000;

    Lista *lista = InicializaLista();

    for (int i = 2; i <= N; i++){
        InsereNum(lista,InicilizaNum(i));
    }

    MarcaMultiplos(lista,N);
    //ImprimeNaoMarcados(lista);
    LiberaLista(lista);
    
    return 0;
}
