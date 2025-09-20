/*4)Construa um programa (com módulo/método) que leia n nomes completos de pessoas DE UM ARQUIVO DE ORIGEM e os exiba na tela;
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Função para ler os nomes presentes do arquivo nomes.txt
void mostraNomes(const string& caminho){
    ifstream arq(caminho);
    //Roporte de erro em caso de não localização do arquivo
    if(!arq.is_open()){
        cerr << "Arquivo \"" << caminho << "\" não encontrado" << endl;
        return;
    }

    //Leitura e exibição de cada linha do arquivo
    string linha;
    cout << "Nomes presentes no arquivo:" << endl;
    while (getline(arq, linha)){
    cout << linha << endl;
    }
}

int main(){
    string caminho;

    cout << "Insira o nome do arquivo a ser lido." << endl;
    getline(cin, caminho);

    mostraNomes(caminho);
    return 0;
}
