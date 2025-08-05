#include<iostream> //<stdio.h>
#include<string>   //<string.h>
#define TAM 2

using namespace std;

//Crinado um tipoo/estrutura artificial

typedef struct {
    string placa;
    string horaDeEntrada;
    string horaDeSaida;
    float valor;
}Carro;

int main(){
    Carro garagem[TAM];
    Carro carro;

    for(int i = 0; i<TAM; i++){

        do{
            cout << "Placa do Carro: ";
            cin >> carro.placa;
            if(carro.placa.size() ==7){
                break;
            } else {
                cout << "Placa Inválida. Redigite...\n";
            }
        }while(true);

        cout << "Hora de entrada: ";
        cin >> carro.horaDeEntrada;

        garagem[i] = carro;
    }

    cout << "Carros na garagem:";
    for(int i =0; i<TAM; i++){
        cout << "Placa: " << garagem[i].placa << ". Hora de Entrada: " << garagem[i].horaDeEntrada << "\n";
    }
    cout << "\n";

    return 1;
}