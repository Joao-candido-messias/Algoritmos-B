#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#define N 100  // tamanho máximo do vetor

// Função que lê nomes de um arquivo e os armazena no vetor
int lerNomes(string nomes[], const string& arquivoOrigem) {
    ifstream arq(arquivoOrigem);
    if (!arq.is_open()) {
        cerr << "Arquivo \"" << arquivoOrigem << "\" não encontrado" << endl;
        return 0;
    }

    string linha;
    int count = 0;
    while (getline(arq, linha) && count < N) {
        nomes[count] = linha;
        count++;
    }

    arq.close();
    return count; // retorna quantidade de nomes lidos
}

// Função que exibe nomes e grava no arquivo destino com quantidade de caracteres
void salvarComTamanho(string nomes[], int n, const string& arquivoDestino) {
    ofstream arq(arquivoDestino);
    if (!arq.is_open()) {
        cerr << "Não foi possível abrir o arquivo \"" << arquivoDestino << "\" para escrita" << endl;
        return;
    }

    cout << "Nomes e quantidade de caracteres:" << endl;
    for (int i = 0; i < n; i++) {
        cout << nomes[i] << " (" << nomes[i].length() << ")" << endl;
        arq << nomes[i] << ";" << nomes[i].length() << endl;
    }

    arq.close();
}

int main() {
    string nomes[N];
    string arquivoOrigem, arquivoDestino;

    cout << "Digite o arquivo de origem: ";
    getline(cin, arquivoOrigem);

    int n = lerNomes(nomes, arquivoOrigem);
    if (n == 0) {
        cout << "Nenhum nome foi lido." << endl;
        return 1;
    }

    cout << "Digite o arquivo de destino: ";
    getline(cin, arquivoDestino);

    salvarComTamanho(nomes, n, arquivoDestino);

    return 0;
}
