#include <iostream>
using namespace std;//permite a utilizacao dos nomes std sem a utilizacao do prefixo 'std::'

    int Soma(int x, int y)
    {//funcao que retorna numeros inteiros e recebe dois numeros inteiros as parametros
        int resul = x + y; //variavel que existe apenas dentro da funcao amazena a operacao dos parametros
        return resul; //funcao retorna o resultado da operacao
    }
    
    int Sub(int x, int y)
    {
        int resul = x - y;
        return resul;
    }
    
    int Div(int x, int y)
    {
        int resul = x / y;
        return resul;
    }
    
    int Mult(int x, int y)
    {
        int resul = x * y;
        return resul;
    }

int main() {

    cout << Soma(5,5) << endl;
    cout << Sub(5,5) << endl;
    cout << Div(5,5) << endl;
    cout << Mult(5,5) << endl;
    //chamando as funcoes que retornarao o resultado na tela, tambem definindo seus parametros
}