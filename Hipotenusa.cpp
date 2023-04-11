#include <iostream> //biblioteca que permite input do usuario
#include <cmath> //biblioteca que permirte uso de operacoes matematicas complexas
using namespace std;

int main() {
    float cateto2, cateto1, hipotenusa; //variaveis float que amarzenam o valor da area da base e da altura
    
    cout << "Digite o tamanho do cateto1: "; // interface para instrucao do usuario
    cin >> cateto1; //entrada do valor do cateto1
    
    cout << "Digite o tamanho do cateto2: "; // interface para instrucao do usuario
    cin >> cateto2; //entrada do valor cateto2
    
    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2)); //calculo da hipotenusa sqrt->raiz quadrada; pow->elevado;
    
    cout << "A hipotenusa do triangulo eh " << hipotenusa << endl; //interface do usuario mostando o valor da area
}