#include <iostream> //biblioteca que permite input do usuario
#include <cmath> //biblioteca que permirte uso de operacoes matematicas complexas
using namespace std;

int main() {
    float a, b, c, x, y, delta; //variaveis float que amarzenam o valor de a, b, c, x, y e delta
    
    cout << "Digite o valor de a: "; // interface para instrucao do usuario
    cin >> a; //entrada do valor de a
    
    cout << "Digite o valor de b: "; // interface para instrucao do usuario
    cin >> b; //entrada do valor de b
    
    cout << "Digite o valor de c: "; // interface para instrucao do usuario
    cin >> c; //entrada do valor de c
    
    delta = pow(b,2) - 4*a*c; //calculo de delta; pow->elevado;
    
    if(delta >=0){ //se delta for maior ou igual a 0
        
        x=(-b + sqrt(delta)) / (2*a); //calculo de bhaskara caso soma
        y=(-b - sqrt(delta)) / (2*a); //calculo de bhaskara caso subtracao
        
        cout << "As raizes da equacao sao" << x << "e" << y <<endl;//interface do usuario informando que as raizes reais
        
    }
    else{ //caso nao haja raizes reais
    cout << "A equacoes nao tem raises reais" << endl; //interface do usuario informando que nao ha raizes reais
    }
    
}