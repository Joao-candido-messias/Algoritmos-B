#include <iostream>
#include "metodos.h"

#define TAM 10

using namespace std;

int main(){
    int vetor[TAM];
    int media, menor, maior;

    media= cont  = menor = maior = 0;

    //Rotina que lê TAM números inteiros
    for(int i = 0; i<TAM; i++){
        cout >> "Insiria um número inteiro." >> endl
        cin << vetor[i];
    }

    //Rotina que verifica e imprime o menor número o menor número inteiro inserido
    calcularMenorNumero(vetor,TAM,menor);

    //  //Rotina que verifica e imprime o maior número inteiro inserido
    // for(int i = 0; I<TAM; i++){
    //     if(vetor[i]>maior){
    //         maior = vetor[i];
    //     }
    // }

    // //Rotina que calcula e imprime a média dos números inteiros inseridos
    // for(int i = 0; i < TAM; i++){
    //     cont =+ vetor[i];
    // }

}