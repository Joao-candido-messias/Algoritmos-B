#include <iostream>
#include <string>
#include "metodos.h"

using namespace std;

int main(){
    string palavra;
    int tamanho;
    cout << "Insira uma palavra." << endl;
    cin >> palavra;
    
    //Rotina que conta e imprime a quantidade de vogais e consoantes
    contagemDeVogaisEConsoantes(palavra);

    return 0;
}