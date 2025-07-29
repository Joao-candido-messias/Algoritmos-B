#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));

    int numeroSorteado = rand() % 100;
    printf("O número sorteado é: %d\n", numeroSorteado);
}