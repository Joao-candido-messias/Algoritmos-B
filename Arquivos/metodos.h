#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
    string nomeCompleto;
    string sobreNome;
};

// Preenche um vetor de strings (nomes simples)
void preencheNome(string nomes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Insira um nome completo: " << endl;
        getline(cin, nomes[i]);
    }
}

// Exibe um vetor de strings
void exibeNome(string nomes[], int tamanho) {
    cout << "Nomes do vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << nomes[i] << endl;
    }
}

// Preenche um vetor de Pessoas (inclui extração do sobrenome)
void preencheNomePessoa(Pessoa pessoas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Insira um nome completo: ";
        getline(cin, pessoas[i].nomeCompleto);

        // Extrai o sobrenome
        size_t pos = pessoas[i].nomeCompleto.find_last_of(' ');
        if (pos != string::npos) {
            pessoas[i].sobreNome = pessoas[i].nomeCompleto.substr(pos + 1);
        } else {
            pessoas[i].sobreNome = pessoas[i].nomeCompleto;
        }
    }
}

// Exibe nomes completos e sobrenomes do vetor de Pessoas
void exibeNomePessoa(Pessoa pessoas[], int tamanho) {
    cout << "\nNomes do vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Nome completo: " << pessoas[i].nomeCompleto
             << " | Sobrenome: " << pessoas[i].sobreNome << endl;
    }
}

// Exibe um vetor de strings com a quantidade de caracteres das strings
void exibeNomeESeuTamanho(string nomes[], int tamanho) {
    cout << "Nomes do vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Nome: " << nomes[i];
        cout << "Quantidade de caracteres: " << nomes[i].length() << endl;
    }
}

