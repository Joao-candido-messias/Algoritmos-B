#include <iostream>
#include <string>
#include "metodos.h"

using namespace std;

int main(){
    string frase;
    string resultado;

    //Rotina que recebe uma frase e devolve a mesma frase apenas em letras maisculas
    cout << "Insira uma frase" << endl;
    getline(cin, frase);
    resultado = devolveMaiscula(frase);

    cout << resultado << endl;

    return 0;
}