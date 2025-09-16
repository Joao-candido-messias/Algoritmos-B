#include <iostream>
#include <string>
#include <fstream>

#define TAM 5

using namespace std;

// Função para ler nomes do arquivo e armazenar no vetor
int lerNomesDoArquivo(string nomes[], int tamanho, const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    if (!arquivo) {
        cout << "Arquivo não localizado. Programa encerrado." << endl;
        return 0;
    }
    
    int count = 0;
    string linha;
    
    // lê linhas até acabar ou vetor cheio
    while (count < tamanho && getline(arquivo, linha)) {
        nomes[count] = linha;
        count++;
    }
    
    arquivo.close();
    return count;  // quantidade de nomes lidos
}

int main() {
    string nomes[TAM];
    string nomeArquivo = "nomes.txt";

    int nLidos = lerNomesDoArquivo(nomes, TAM, nomeArquivo);

    if (nLidos == 0) {
        // Arquivo não localizado ou vazio
        return 1;
    }

    cout << "Nomes lidos do arquivo:" << endl;
    for (int i = 0; i < nLidos; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}
