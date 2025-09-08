#include<iostream>
#include <string>

using namespace std;

#define TAM 5

struct Aluno{
    string nome;
    int matricula;
};

int verificaAlunoEmTurma(Aluno alunos[], int matricula){
    int indice = -1;
    for(int i = 0; i<TAM; i++){
        if(matricula == alunos[i].matricula){
            indice = i;
        }
    }

    return indice;
}

int main(){
    Aluno alunos[TAM];

    //Rotina que coleta o nome e a matricula de TAM alunos"
    for(int i = 0; i<TAM; i++){
        cout << "Insira o nome do Aluno: " << endl;  
        cin >> alunos[i].nome;
        cout << "Insira a matricula do Aluno: " << endl;
        cin >> alunos[i].matricula;
    }

    //Chama a função verificaAlunoEmturma
    int resultado = verificaAlunoEmTurma(alunos, 123);

    if(resultado == -1){
        cout << "Aluno não encontrado." << endl;
    }else{
        cout << alunos[resultado].nome << endl;
    }

    return 0;
}
    