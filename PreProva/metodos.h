#include<cstdlib>
#include<time.h>
#include<string>

using namespace std;

int checarMenorNumeroInteiro(int vetor[], int tamanho, int &pos){
    int menorNumero = vetor[0];
    pos = 0;
    for(int i = 0; i<tamanho; i++){
        if(vetor[i]<menorNumero){
            menorNumero = vetor[i];
            pos = i;
        }
    }
    return menorNumero;
}

int checarMaiorNumeroInteiro(int vetor[], int tamanho, int &pos){
    int maiorNumero = vetor[0];
    pos = 0;
    for(int i = 0; i<tamanho; i++){
        if(vetor[i]>maiorNumero){
            maiorNumero = vetor[i];
            pos = i;
        }
    }
    return maiorNumero;
}

void nNumerosDeFibonacci(int numero){
    //Verifica se a quantidade de números pedida é positiva
    if(numero<0){
        cout << "O valor deve ser positivo." << endl;
        return;
    }

    int a, b, c;
    a = c = 0;
    b = 1;

    for(int i = 0; i<numero; i++){
        if(i == 0){
            c = a;
        }
        else if(i == 1){
            c = b;
        }
        else{
            c = a+b;
            a = b;
            b = c;  
        }
        cout << c << "\t";
    }
}

//Struc de Aluno contendo nome e nota
struct Aluno{
    string nome;
    float nota;
};

float calculaMedia(Aluno alunos[], int tamanho){
    float media,somaDasNotas;
    media = somaDasNotas = 0;
    for(int i = 0; i<tamanho; i++){
        somaDasNotas += alunos[i].nota;
    }
    media = somaDasNotas/tamanho;
    cout << "A media da nota dos alunos é: " << media << endl;

    return media;
}

void alunosAcimaDaMedia(Aluno alunos[], int tamanho, float media){
    cout << "Alunos acima da media:" << endl;
    for(int i = 0; i < tamanho; i++){
        if(alunos[i].nota >= media){
            cout << alunos[i].nome << endl;
        }
    }
}

void contagemDeVogaisEConsoantes(string palavra){
    const char vogais[] = {'a','e','i','o','u','A','E','I','O','U'};
    int contVogal = 0;
    int tamanho = palavra.length();

    //Rotina que verifica se cada uma das letras da palavra é ou não vogal, adicionando 1 a contVogal no caso de ser
    for(int i = 0; i < palavra.length(); i++){
        for(int j = 0; j<10; j++){
            if(palavra[i] == vogais[j]){
                contVogal++;
            }
        }     
    }
    cout << "Quantidade de vogais: " << contVogal << endl;
    cout << "Quantidade de consoantes: " << tamanho - contVogal << endl;
}

void somaDaDiagonalPrincipal(int matriz[3][3]){
    int soma = 0;
    for(int i = 0; i<3 ; i++){       
        soma += matriz[i][i];
    }
    cout << "Soma dos numeros da diagonal principal: " << soma << endl;
}

void somaDaDiagonalSecundaria(int matriz[3][3]){
    int soma = 0;
    for(int i = 0; i<3 ; i++){       
        soma += matriz[i][3 - 1 - i];
    }
    cout << "Soma dos numeros da diagonal secundaria: " << soma << endl;
}

int calculaFatorial(int numero){
    if (numero == 0) return 1; 
    return numero * calculaFatorial(numero- 1);
}