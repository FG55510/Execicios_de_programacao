#include <iostream>
using namespace std;
int main() {
    float nota1, nota2, nota3, ac1, ac2, af, soma;// declaracao das variaveis usadas

    cout << "digite a nota da AC1: " << endl;//interface para o usuario
    cin >> nota1;//atribuicao da nota entrada pelo usuario

    cout << "digite a nota da AC2: " << endl;//interface para o usuario
    cin >> nota2;//atribuicao da nota entrada pelo usuario

    cout << "digite a nota AF: " << endl;//interface para o usuario
    cin >> nota3;//atribuicao da nota entrada pelo usuario
    
    ac1= nota1 * 1.5
    ac2= nota2 * 3.5
    af= nota1 * 5.0
    //Multiplicacao das notas pelo devido peso
    
    soma = (ac1 + ac2 + af);//soma das notas

    cout << "A soma das notas eh" << soma << endl;//interface para o usuario informando a soma das notas

    if (soma >= 5){
        cout << "Voce foi aprovado! =)" << endl;
    }//motra a mensagem caso o usuario foi aprovado

    else{
        cout << "Voce nao foi aprovado! :(" << endl;
    }//motra a mensagem caso contrario

    return 0;
}