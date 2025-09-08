#include <iostream>
#include <vector>//Possibilita a utilização de arrays sem tamanho fixo

using namespace std;

int main() {
    int idade = 0, soma = 0, maior = 0, quantidadeDeIdadesLidas = 0;
    vector<int> idades;

    //Rotina que le idades até que o valor seja negativo
    do {
        cout << "Insira a idade de uma pessoa: ";
        cin >> idade;
        if (idade >= 0) {
            idades.push_back(idade);
            quantidadeDeIdadesLidas++;
        }
    } while (idade >= 0);
    //
    if (idades.empty()) {
        cout << "Nenhuma idade válida foi inserida." << endl;
        return 0;
    }
    //Rotina que verifica a maior idade inserida
    maior = idades[0];
    for (int id : idades) {
        soma += id;
        if (id > maior) maior = id;
    }
    //Calculo da medias das idades
    double media = (double)soma / quantidadeDeIdadesLidas;

    //Impressão da media das idades e da maior idade
    cout << "Media das idades: " << media << endl;
    cout << "Maior idade: " << maior << endl;

    return 0;
}
