#include <iostream>
#include <string>
#include "metodos.h"

#define TAM 5

using namespace std;

int main(){
    string nomes[TAM];

    //Rotina que preenche os nomes completos no vetor nomes
    preencheNome(nomes, TAM);

    //Rotina que exibe os nomes complests do vetor nomes
    exibeNome(nomes, TAM);

    return 1;
}