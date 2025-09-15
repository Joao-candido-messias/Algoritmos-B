#include <iostream>
#include <string>
#include "metodos.h"  // Supondo que as funções estão declaradas nesse cabeçalho

#define TAM 5

using namespace std;

int main() {
    Pessoa pessoas[TAM];

    // Rotina que preenche os nomes completos no vetor pessoas
    preencheNomePessoa(pessoas, TAM);

    // Rotina que exibe os nomes completos do vetor pessoas
    exibeNomePessoa(pessoas, TAM);

    return 0;
}
