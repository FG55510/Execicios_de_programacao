#include <iostream>
using namespace std;
int main() {
    int num, i=1;

    cout << "Digite um numero intero" << endl; //interface para o usuario
    cin >> num; //amazena o numero informado pelo usuario
    
 while (i<= num){//verificacao da condicao de repeticao
    cout << i << "\n"; //mostra o valor de i na tela fazendo contagem até o numero que o usuario inseriu
    i++; //adiciona mais 1 ao valor de i
 }
    return 0;
}