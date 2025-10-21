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

void ParesPorZero(int *v, int n, int *pares){
    *pares = 0;
    for(int i = 0; i<n; i++){
        if(v[i] %2 == 0){
            v[i] = 0;
            *pares = *pares+1;
        }
    }
}

int main() {
   int vetor[TAM];
   popula(vetor, TAM);
   exibe(vetor, TAM);

   int qtdpares = 0;

   ParesPorZero(vetor, TAM, &qtdpares);

   cout << "Quantidade de numeros substituidos por 0:" << qtdpares << endl;

   cout << "Numeros do novo vetor:" << endl;
   exibe(vetor, TAM);

   return 0;
}