#include <iostream>
#include <string>
#define TAM 5
 
using namespace std;
 
int main() {
    cout << "Exemplo de vetor de placas que sao strings\n\n";
    string nome;
    string vetorNomes[TAM];
 
    //rotina em que o insere um nom se somente se o nome não estiver no vetor
    for (int i = 0; i < TAM; i++) {
        cout << "Digite um nome: ";
        getline(cin,nome);
 
        vetorNomes[i] = nome;
    }
 
    //rotina em que o programa exibe os nomes um após o outro
    cout << "Nomes:" << "\n";
    for (int i = 0; i < TAM; i++) {
        cout << vetorNomes[i] << "\n";
    }
    cout << "\n";
 
    return 1;
}