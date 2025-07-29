#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#define TAM  10

int main(){
    setlocale(LC_ALL, "portuguese");

    int vetor[TAM];

    srand(time(NULL));

    for(int i = 0; i < TAM ; i++){
        vetor[i] =rand() %100;
    }

    printf("Números gerados:\n");

    for(int i = 0; i < TAM ; i++){
        printf("\t%d", vetor[i]);
    }

    printf("\n");

    return 0;
}