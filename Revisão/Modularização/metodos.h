#include<cstdlib>
#include<time.h>
#include<string.h>

void popular(int vetor[], int quantidade, int tamanho){
    if(quantidade>tamanho){
        cout << "Essa quantidade não é possivel";
        return;//Força a saida do metodo!!
    }
    srand(time(NULL));

    for(int i = 0; i<quantidade; i++){
        vetor[i]= rand() % 100;
    }
}

void exibir(string frase, int vetor[], int quantidade, int tamanho) {
    if (quantidade > tamanho) {
        cout << "Essa quantidade nao eh possivel...";
        return; //forcando a saida do metodo
    }
    cout << frase << endl;
    for (int i = 0; i < quantidade; i++) {
        cout << vetor[i] << endl;
    }
}

void menorValor(int vetor[], int quantidade, int tamanho){
    int menor = vetor[0];
    for(int i = 0; i < tamanho; i++){
        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }
    cout << "Menor Valor: " << menor;
}