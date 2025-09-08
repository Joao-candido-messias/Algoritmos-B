#include <iostream>
#include "metodos.h"

using namespace std;

int main(){
    int numero = 0;
    int fatorial;

    //Rotina que lÊ um numero inteiro e devolve seu fatorial
    cout << "Insira um numero inteiro." << endl;
    cin >> numero;

    fatorial = calculaFatorial(numero);

    cout << "O fatorial de "<< numero << " é: "<< fatorial << endl;

    return 0;
}