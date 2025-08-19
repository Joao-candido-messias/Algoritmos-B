#include <iostream>
#include <algorithm>
#include <limits>

#define TAM 4

using namespace std;

int main() {
    int glicemia[TAM];
    int quantidadeInseridos = 0;
    int opcao;

    do {
        cout << "\nMenu" << endl;
        cout << "1 - Cadastrar dados glicemicos (45 a 450)" << endl;
        cout << "2 - Mostrar dados glicemicos" << endl;
        cout << "3 - Calcular e exibir media" << endl;
        cout << "4 - Calcular e exibir mediana" << endl;
        cout << "5 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcao) {
            case 1:
                if (quantidadeInseridos == TAM) {
                    cout << "Vetor lotado..." << endl;
                } else {
                    int dado;
                    cout << "Digite o dado glicemico: ";
                    cin >> dado;
                    if (dado < 45 || dado > 450) {
                        cout << "Valor invalido! Precisa estar entre 45 e 450." << endl;
                    } else {
                        glicemia[quantidadeInseridos] = dado;
                        quantidadeInseridos++;
                        cout << "Dado cadastrado com sucesso!" << endl;
                    }
                }
                break;

            case 2:
                if (quantidadeInseridos == 0) {
                    cout << "Nenhum dado cadastrado." << endl;
                } else {
                    cout << "Dados cadastrados:" << endl;
                    for (int i = 0; i < quantidadeInseridos; i++) {
                        cout << "Dado " << (i+1) << ": " << glicemia[i] << endl;
                    }
                }
                break;

            case 3:
                if (quantidadeInseridos == 0) {
                    cout << "Nenhum dado cadastrado para calcular a media." << endl;
                } else {
                    double soma = 0;
                    for (int i = 0; i < quantidadeInseridos; i++) {
                        soma += glicemia[i];
                    }
                    cout << "Media da glicemia: " << soma / quantidadeInseridos << endl;
                }
                break;

            case 4:
                if (quantidadeInseridos == 0) {
                    cout << "Nenhum dado cadastrado para calcular a mediana." << endl;
                } else {
                    int copia[TAM];
                    for (int i = 0; i < quantidadeInseridos; i++)
                        copia[i] = glicemia[i];
                    sort(copia, copia + quantidadeInseridos);

                    double mediana;
                    if (quantidadeInseridos % 2 == 1) {
                        mediana = copia[quantidadeInseridos/2];
                    } else {
                        mediana = (copia[quantidadeInseridos/2 - 1] + copia[quantidadeInseridos/2]) / 2.0;
                    }
                    cout << "Mediana da glicemia: " << mediana << endl;
                }
                break;

            case 5:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 5);

    return 0;
}
