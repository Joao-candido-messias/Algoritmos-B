#include <iostream>
#include "metodos.h"

#define TAM 10

using namespace std;

int main() {
    int vetor[TAM];
    int media, menor, maior, posMaior, posMenor;

    media = menor = maior = posMaior = posMenor = 0;

    // Rotina que lê TAM números inteiros
    for(int i = 0; i < TAM; i++) {
        cout << "Insira um número inteiro: " << endl;
        cin >> vetor[i];
    }

    // Rotina que checa e imprime o menor numero inteiro inserido.
    menor = checarMenorNumeroInteiro(vetor, TAM, posMenor);
    cout << "Menor numero: " << menor << endl <<"Posicao no vetor: " << posMenor << endl;

    //Rotina que checa e imprime o maior numero inteiro inserido
    maior = checarMaiorNumeroInteiro(vetor, TAM, posMaior);
    cout << "Maior numero " << maior << endl << "Posicao no vetor: " << posMaior << endl;

    return 0;
}