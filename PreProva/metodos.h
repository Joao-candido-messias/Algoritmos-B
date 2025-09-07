#include<cstdlib>
#include<time.h>
#include<string.h>

int checarMenorNumeroInteiro(int vetor[], int tamanho, int menorNumero){
    for(int i = 0; i<tamanho; i++){
        if(vetor[i]<menorNumero){
            menorNumero = vetor[i];
        }
    }
    return menorNumero
}