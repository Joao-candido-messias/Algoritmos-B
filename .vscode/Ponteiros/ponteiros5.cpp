#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

#define TAM 3
using namespace std;

void popula(string *v, int n) {
    for (int i = 0; i < n; i++){
        string nome;
        cout << "Insira um nome." << endl;
        getline(cin, nome);
        v[i] = nome;
    }
}

void exibe(string *v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
}

//Metodo que normaliza minhas strings
string toUpper(const string &s) {
    string temp = s;
    transform(temp.begin(), temp.end(), temp.begin(),
              [](unsigned char c){ return toupper(c); });
    return temp;
}

//Metodo que busca nome em um vetor de nomes
void buscarNome(string *v, string nome, int n){
   bool encontrado = false;
   for(int i = 0; i<n; i++){
        if(toUpper(v[i]) == toUpper(nome)){
            encontrado = true;
            cout << "O nome " << nome << " foi encontrado na posição: " << i << "." << endl;
            break;
        }
    }

    if(!encontrado){
        cout << "O nome " << nome << " nao foi encontrado." << endl;
    }

}

int main() {
    string vetor[TAM];
    popula(vetor, TAM);
   
    string nome;

    cout << "Insira um nome a ser procurado." << endl;
    getline(cin, nome);

    buscarNome(vetor, nome, TAM);

    return 0;
}