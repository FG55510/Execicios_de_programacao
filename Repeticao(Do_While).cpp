#include <iostream>
using namespace std;
int main() {
    int num;
    
    do {//codigo que sera executado e repetido
        
        cout << "Digite um numero de 1 a 10: " << endl; //interface para o usuario
        cin >> num; //amazena o numero informado pelo usuario
        
    } while (num < 1 || num > 10);//verificacao da condicao de repeticao
    cout << "Voce digitou o numero " << num << endl; //numero digitado que é entre 1 e 10

    return 0;
}