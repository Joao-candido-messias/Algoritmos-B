#include<iostream>
#include <string>
#include "metodos.h"

using namespace std;

#define TAM 2

int main(){
    Aluno alunos[TAM];
    float media;

    //Rotina que coleta o nome e a nota de TAM alunos
    cin.ignore();
    for (int i = 0; i<TAM; i++){
        cout << "Insira o nome do Aluno: " << endl;  
        getline(cin, alunos[i].nome);
        cout << "Insira a nota do Aluno: " << endl;
        cin >> alunos[i].nota;
    }

    //Rotina que calcula a media das notas de TAM anlunos
    media = calculaMedia(alunos, TAM);

    //Rotina que mostra o nome dos alunos acima da média
    alunosAcimaDaMedia(alunos, TAM, media);

    return 0;
}
    