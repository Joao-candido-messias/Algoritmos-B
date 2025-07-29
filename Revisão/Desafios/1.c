#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

#define TAM 10

int main(){
    setlocale(LC_ALL, "portuguese");

    int vetor[TAM];
    int cont =0;
    int i = 0;
    
    srand(time(NULL));

    while(i<TAM){
        int numero = rand() % 100;
        int repetido = 0;

        for(int j = 0; j<i; j++){
            if(vetor[j] == numero){
                repetido = 1;
                printf("Número %d já existe no vetor, tentando novamente...\n", numero);
                break;  
            }
        }

        if(!repetido){
            vetor[i] = numero;
            i++;
        }else{
            cont++;
        }
    }

    printf("Números inseridos sem repetição:\n");
        for(int i = 0; i < TAM ; i++){
            printf("%d\t", vetor[i]);
        }
    
    printf("\nTotal de tentativas para evitar repetição: %d\n", cont);
    return 0;
}

    
    
