#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Digite um numero intero" << endl; //interface para o usuario
    cin >> num; //amazena o numero informado pelo usuario
    
    cout << "Os primeiros "<< num <<" numeros pares sao:\n" << endl; //interface para o usuario informando o que ira acontecer
    
 for (int i= 2; i <= num * 2; i+=2) {//para cada vez que o codigo for executado, i que eh o parametro da repeticao sera adicionado de mais 2
    cout << i << "\n"; //mostra o valor de i na tela fazendo contagem dos numeros pares ate a quantidade do numero digitado pelo usuario
 }
    return 0;
}