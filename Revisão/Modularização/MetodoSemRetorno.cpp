#include <iostream>

#define TAM 10

using namespace std;

#include "metodos.h"
int main(){

    int vetor[TAM];
    int quantidade = 10;

    //Metodo que popule o vetor com n elementos aleatorios desde que menor que TAM
    popular(vetor, quantidade, TAM);

    //Metodo que exiba o vetor
    exibir("Exibindo vetor", vetor, quantidade, TAM);

    menorValor(vetor, quantidade, TAM);

    return 1;
}