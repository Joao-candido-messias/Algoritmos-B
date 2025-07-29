#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade, tempoSono;

    system("clear");

    printf("Digite sua idade:");
    scanf("%d", &idade);

    tempoSono = (int)idade/3;

    printf("Você já dormiu aproximadamente %d anos.\n",tempoSono);
}