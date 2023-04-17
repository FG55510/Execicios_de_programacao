#include <iostream>
using namespace std;
int main() {
    
    int var = 3; //variavel criada
    int* pvar; //criacao do ponteiro
    pvar = &var; //pointeiro armazena o valor da variavel
    
    cout << var <<endl; //mostra o valor armazenado na variavel
    cout << *pvar <<endl; //mostra o valor armazenado no ponteiro
    cout << pvar <<endl; //mostra a localizacao onde o ponteiro armazena informacao
}