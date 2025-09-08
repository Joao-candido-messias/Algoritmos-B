#include <iostream>
#include "metodos.h"

using namespace std;

int main(){

    int matriz[3][3];

    //Rotina que lê uma matriz 3x3
    for(int i = 0; i<3 ; i++){
        for(int j =0; j<3; j++){
            cout << "Insira um numero inteiro." << endl;
            cin >> matriz[i][j];
        }
    }

    //Rotina que exibe a soma da diagonal principal
    somaDaDiagonalPrincipal(matriz);
    //Rotina que exibe a soma da diagonal secundaria
    somaDaDiagonalSecundaria(matriz);
    
    return 0;
}