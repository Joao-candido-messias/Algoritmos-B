#include <iostream>
#include <ctime>

#define TAM 3
using namespace std;

void popula(int *v, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 20;
    }
}

void exibe(int *v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
}

void ParesImpares(int *v, int n, int *pares, int *impares){
    *pares = 0;
    *impares = 0;
    for(int i = 0; i<n; i++){
        if(v[i] %2 == 0){
            *pares = *pares+1;
        }
        else{
            *impares = *impares+1;
        }
    }
}

int main() {
   int vetor[TAM];
   popula(vetor, TAM);
   exibe(vetor, TAM);

   int qtdpares = 0;
   int qtdimpares =0;

   ParesImpares(vetor, TAM, &qtdpares, &qtdimpares);

   cout << "Quantidade de numeros pares: " << qtdpares << endl;
   cout << "Quantidade de numeros impares: " << qtdimpares << endl;
}