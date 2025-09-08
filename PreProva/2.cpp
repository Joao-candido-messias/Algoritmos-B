#include <iostream>
#include "metodos.h"

using namespace std;

int main(){

    int quantidade;
    cout << "Insira a quantidade de numeros que deseja saber." << endl;
    cin >> quantidade;

    nNumerosDeFibonacci(quantidade);
    
    return 0;
}