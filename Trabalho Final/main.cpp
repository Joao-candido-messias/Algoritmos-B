#include <iostream>
#include <string>
#include "includes.h"

using namespace std;

int main(){
    string nomeArquivo = "baseDados.csv";

    qtd = conectarBase(vetor, TAM, nomeArquivo);

    int opc;

    do {
        menu();
        cin >> opc;

        switch(opc){
            case 1:
                cadastrar(vetor, qtd, TAM, nomeArquivo);
                break;

            case 2:
                listar(vetor, qtd);
                break;

            case 3:
                remover(vetor, qtd, nomeArquivo);
                break;

            case 4: {
                cin.ignore();
                string chave;
                cout << "Pesquisar por nome do alimento: ";
                getline(cin, chave);

                int pos = pesquisar(vetor, qtd, chave);

                if(pos == -1){
                    cout << "Nao encontrado.\n";
                } else {
                    cout << "Data: " << vetor[pos].dataDegustacao << endl;
                    cout << "Alimento: " << vetor[pos].nomeAlimento << endl;
                    cout << "Nota: " << vetor[pos].nota << endl;
                    cout << "Fabricante: " << vetor[pos].fabricante << endl;
                    cout << "Comentario: " << vetor[pos].comentario << endl;
                }
                break;
            }

            case 5:
                sair();
                break;

            default:
                cout << "Opcao invalida.\n";
        }

    } while(opc != 5);

    return 0;
}
