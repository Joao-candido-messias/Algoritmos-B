#include <iostream>
#include <vector>//Possibilita a utilização de vetores sem tamhos definidos

using namespace std;

int main(){
    int quantidadeDePessoasLidas = 0, idade = 0, soma = 0, maior = 0;
    vetor<int>idades;

    //Rotina que le a idade de várias pessoas. Parando quando o valor digitado for negatico
    do{
        cout << "Insira a idade de uma pessoa." << endl;
        cin >> idade;
        idades[quantidadeDePessoasLidas] = idade;
        quantidadeDePessoasLidas++;
    }
    while(idade>0);

    //Rotina que calcula e imprime a media das idades
    for(int i = 0; i<quantidadeDePessoasLidas; i++){
        soma += idades[i];
    }
    
    cout << "A media das idades é: " << soma/quantidadeDePessoasLidas << endl;

    //Rotina que identifica e imprime a maior nota
    for(int i = 0; i<quantidadeDePessoasLidas; i++){
        if(idades[i]>maior){
            maior = idades[i];
        }
    }

    cout << "A maior idade é: " << maior << endl;
}
