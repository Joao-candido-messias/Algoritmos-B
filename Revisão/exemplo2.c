#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 5
int main(){
    setlocale(LC_ALL, "portuguese");

    char placa[7];
    char vetor[TAM][7];

    //Rotina em que o usuario digita TAM placas
    for(int i = 0; i<TAM; i++){
        printf("Digite uma placa:\n");
        scanf("%s", placa);
        strcpy(vetor[i], placa);
    }

    printf("Placas\n");

    //Rotina em que o programa mostra as placas
    for(int i = 0 ; i<TAM ; i++){
        printf("Placa %d:\n %s\n", i, vetor[i]);
    }

    printf("\n");

    return 1;
}