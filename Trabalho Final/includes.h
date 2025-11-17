
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

#define TAM 1000

//Struct de Degustação utilizada no sistema.
typedef struct {
    string dataDegustacao;
    string comentario;
    int nota;
    string nomeAlimento;
    string fabricante;
} Degustacao;

Degustacao vetor[TAM];
int qtd = 0;

//Função para conectar a base de dados e carregar os registros.
int conectarBase(Degustacao vet[], int tam, string nomeArquivo){
    ifstream arq(nomeArquivo);
    if(!arq.is_open()){
        return 0;
    }

    string linha;
    int count = 0;

    while(getline(arq, linha) && count < tam){
        stringstream ss(linha);
        string aux;

        getline(ss, vet[count].dataDegustacao, ';');
        getline(ss, vet[count].nomeAlimento, ';');
        getline(ss, aux, ';');
        vet[count].nota = stoi(aux);
        getline(ss, vet[count].fabricante, ';');
        getline(ss, vet[count].comentario, ';');

        count++;
    }

    arq.close();
    return count;
}

//Função para atualizar o arquivo base.
void salvarArquivo(Degustacao vet[], int qtd, string nomeArquivo){
    ofstream arq(nomeArquivo);

    for(int i = 0; i < qtd; i++){
        arq << vet[i].dataDegustacao << ";"
            << vet[i].nomeAlimento << ";"
            << vet[i].nota << ";"
            << vet[i].fabricante << ";"
            << vet[i].comentario;

        if(i < qtd - 1)
            arq << "\n";
    }

    arq.close();
}

//Função menu para interação com o sistema.
void menu(){
    cout << "\nMenu\n";
    cout << "1 - Cadastrar\n";
    cout << "2 - Listar\n";
    cout << "3 - Remover\n";
    cout << "4 - Pesquisar\n";
    cout << "5 - Sair\n";
    cout << "Opcao: ";
}

//Função para cadastrar uma degustação.
void cadastrar(Degustacao vet[], int &qtd, int tam, string nomeArquivo){
    if(qtd >= tam){
        return;
    }

    Degustacao d;

    // Pega data da máquina
    time_t t = time(0);
    tm* now = localtime(&t);

    int dia = now->tm_mday;
    int mes = now->tm_mon + 1;
    int ano = now->tm_year + 1900;

    d.dataDegustacao = 
        (dia < 10 ? "0" + to_string(dia) : to_string(dia)) + "/" +
        (mes < 10 ? "0" + to_string(mes) : to_string(mes)) + "/" +
        to_string(ano);

    cout << "Nome do alimento/bebida: ";
    cin.ignore();
    getline(cin, d.nomeAlimento);

    cout << "Nota (1 a 5): ";
    cin >> d.nota;

    cin.ignore();
    cout << "Fabricante: ";
    getline(cin, d.fabricante);

    cout << "Comentario: ";
    getline(cin, d.comentario);

    vet[qtd] = d;
    qtd++;

    salvarArquivo(vet, qtd, nomeArquivo);
}

//Função para listar as degustações já cadastradas.
void listar(Degustacao vet[], int qtd){
    if(qtd == 0){
        cout << "Nenhuma degustacao cadastrada.\n";
        return;
    }

    for(int i = 0; i < qtd; i++){
        cout << "\nDegustação n° " << i + 1 << endl;
        cout << "Data: " << vet[i].dataDegustacao << endl;
        cout << "Alimento: " << vet[i].nomeAlimento << endl;
        cout << "Nota: " << vet[i].nota << endl;
        cout << "Fabricante: " << vet[i].fabricante << endl;
        cout << "Comentario: " << vet[i].comentario << endl;
    }
}

//Função para pesquisar uma das degustações já cadastradas.
int pesquisar(Degustacao vet[], int qtd, string chave){
    for(int i = 0; i < qtd; i++){
        if(vet[i].nomeAlimento == chave){
            return i;
        }
    }
    return -1;
}

//Função para remover/excluir uma das degustações já cadastradas.
void remover(Degustacao vet[], int &qtd, string nomeArquivo){
    cin.ignore();
    string chave;

    cout << "Nome do alimento para remover: ";
    getline(cin, chave);

    int pos = pesquisar(vet, qtd, chave);

    if(pos == -1){
        cout << "Nao encontrado.\n";
        return;
    }

    for(int i = pos; i < qtd - 1; i++){
        vet[i] = vet[i + 1];
    }

    qtd--;
    salvarArquivo(vet, qtd, nomeArquivo);
}

//Função com "Return 0; E mensagem de despedida do sistema.
void sair(){
    cout << "Obrigada por usar o sistema! (｡*‿*｡)\nVolte sempre ૮₍ ˶ᵔ ᵕ ᵔ˶ ₎ა\n";
}

