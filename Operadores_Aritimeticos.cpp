#include <iostream>
using namespace std;
int main() {
    int num1=10, num2=20; // declaracao de variaveis que contem os numeros que serao operados
    int soma, mult, div, sub; // declaracao de variaveis que irao conter as operacoes
    
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2; //resultado mostra 0 pois a variavel apenas aceita numeros inteiros
    //atribuicao do resultados as variaveis de operacoes
    
    cout<<soma<<endl;
    cout<<sub<<endl;
    cout<<mult<<endl;
    cout<<div<<endl;
    //mostra os resultados das operacoes na tela
    
    return 0;
}