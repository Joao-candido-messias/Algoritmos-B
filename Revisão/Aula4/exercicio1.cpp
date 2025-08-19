#include <iostream>
#include <string>
#include <limits> // para limpar buffer corretamente

using namespace std;

#define TAM 4

int main() {
    string nomes[TAM];
    int quantidadeInseridos = 0;
    int opcao;

    do {
        cout << "\nM E N U" << endl;
        cout << "1 - Cadastrar nome" << endl;
        cout << "2 - Listar nomes" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpa o buffer

        switch (opcao) {
            case 1:
                cout << "Área de Cadastro..." << endl;

                if (quantidadeInseridos == TAM) {
                    cout << "Vetor lotado!" << endl;
                } else {
                    string nome;
                    cout << "Insira um nome: ";
                    getline(cin, nome);

                    // Aqui poderia entrar rotina para verificar duplicados
                    nomes[quantidadeInseridos] = nome;
                    quantidadeInseridos++;
                }
                break;

            case 2:
                cout << "Área de Listagem..." << endl;
                if (quantidadeInseridos == 0) {
                    cout << "Nenhum nome inserido. Nada a listar..." << endl;
                } else {
                    for (int i = 0; i < quantidadeInseridos; i++) {
                        cout << "Nome " << (i + 1) << ": " << nomes[i] << endl;
                    }
                    cout << "-----------------------" << endl;
                    cout << "Total de registros: " << quantidadeInseridos << endl;
                }
                break;

            case 3:
                cout << "Até mais..." << endl;
                break;

            default:
                cout << "Valor inválido!" << endl;
                break;
        }

    } while (opcao != 3);

    return 0;
}
