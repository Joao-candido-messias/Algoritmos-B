/*
Construa um programa (com módulo/método) que leia n nomes completos de pessoas DE UM ARQUIVO DE ORIGEM e os adicione em um vetor de n posicoes em que deve ser armazenado o nome completo e o sobrenome. Use a seguinte estrutura;

typedef struct { string nomeCompleto; string sobreNome; } Pessoa;

Dica: será preciso fazer uma função que extraia o sobrenome de um nome completo.

AO FINAL, ESSES DADOS (nomeCompleto e sobreNome) devem ser salvos em um arquivo de destino, da seguinte forma, por exemplo:

Alexandre de Oliveira Zamberlan; Zamberlan Carlos Alberto Parreira; Parreira Luisa Figueiredo; Figueiredo*/

/*
2) Construa um programa (com módulo/método) que leia n nomes completos de pessoas e os adicione em um vetor de n posicoes em que deve ser armazenado o nome completo e o sobrenome. Use a seguinte estrutura;

typedef struct {
    string nomeCompleto;
    string sobreNome;
} Pessoa;

Dica: será preciso fazer uma função que extraia o sobrenome de um nome completo.
*/

#include <iostream>
#include <string>
#include <fstream>
#define N 5

using namespace std;

struct Pessoa{
    string nomeCompleto;
    string sobreNome;
};

string extrairSobreNome(string nome) {
    string sobreNome;
    // Extrai o sobrenome
    size_t pos = nome.find_last_of(' ');
    if (pos != string::npos) {
        sobreNome = nome.substr(pos + 1);
    } else {
        sobreNome = nome;
    }
    return sobreNome;
}

void lerNomes(Pessoa vetor[], int n) {
    string nomeCompleto;
    string sobreNome;
    for (int i = 0; i < n; i++) {
        cout << "Nome: ";
        getline(cin, nomeCompleto);
        
        sobreNome = extrairSobreNome(nomeCompleto); //chamada da funcao que descobre sobrenome

        vetor[i].nomeCompleto = nomeCompleto;
        vetor[i].sobreNome = sobreNome;
    }
}

void exibirNomes(Pessoa vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome completo: " << vetor[i].nomeCompleto << ". Sobrenome: " << vetor[i].sobreNome << endl;
    }
}

void salvaNomes(Pessoa pessoas[], int tamanho, const string& caminho){
    ofstream arq(caminho);
    //Roporte de erro em caso de não localização do arquivo
    if(!arq.is_open()){
        cerr << "Arquivo \"" << caminho << "\" não encontrado" << endl;
        return;
    }
    //Salva os nomes e os sobrenomes no arquivo "caminho"
    for(int i = 0; i<tamanho; i++){
        arq << pessoas[i].nomeCompleto << ";" << pessoas[i].sobreNome << ";";
    }
}

int main() {
    Pessoa pessoas[N];
    string caminho = "NomesSobrenomes";

    lerNomes(pessoas, N);
    exibirNomes(pessoas, N);
    salvaNomes(pessoas, N, caminho);

    return 1;
}