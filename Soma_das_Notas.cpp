#include <iostream>
using namespace std;
int main() {
    int nota1, nota2, nota3, nota4, soma;// declaracao das variaveis usadas
    
    cout << "digite a primera nota: " << endl;//interface para o usuario
    cin >> nota1;//atribuicao da nota entrada pelo usuario
    
    cout << "digite a segunda nota: " << endl;//interface para o usuario
    cin >> nota2;//atribuicao da nota entrada pelo usuario
    
    cout << "digite a terceira nota: " << endl;//interface para o usuario
    cin >> nota3;//atribuicao da nota entrada pelo usuario
    
    cout << "digite a quarta nota: " << endl;//interface para o usuario
    cin >> nota4;//atribuicao da nota entrada pelo usuario
    
    soma = (nota1 + nota2 + nota3 + nota4)/4;//soma das notas
    
    cout << "A soma das notas eh " << soma << endl;//interface para o usuario informando a soma das notas
    
    if (soma >= 7){
        cout << "Voce foi aprovado! =)" << endl;
    }//motra a mensagem caso o usuario foi aprovado
    
    else{
        cout << "Voce nao foi aprovado! :(" << endl;
    }//motra a mensagem caso contrario

    return 0;
}