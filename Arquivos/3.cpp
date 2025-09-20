// Construa um programa (com módulo/método) que leia n nomes de pessoas, armazena em um vetor de nomes e os exiba na tela. Porém, é necessário ao lado do nome mostrar quantos caractares tem esse nome.
#include <iostream>
#include <string>
#define N 5

using namespace std;

void lerNomes(string vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Insira um nome: ";
        getline(cin, vetor[i]);
    }
}

void exibirNomes(string vetor[], int n) {
    cout << "Nomes inseridos na lista:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nome: " << vetor[i] << ". Tamanho: " << vetor[i].length() << " caracteres" << endl;
    }
}

void ordenarNomes(string vetor[], int n) {
    string tmp;
    bool houveTroca;

    do {
        houveTroca = false;
        for (int i = 0; i < n-1; i++) {
            if (vetor[i] > vetor[i+1]) {
                houveTroca = true;
                tmp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = tmp;
            }
        }
    } while (houveTroca);
}

int main() {
    string nomes[N];
    //rotina para ler/receber nomes completos
    lerNomes(nomes, N);

    //rotina de ordenacao
    ordenarNomes(nomes, N);

    //rotina para exibir os nomes completos
    exibirNomes(nomes, N);

    return 1;
}