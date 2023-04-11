#include <iostream> //biblioteca que permite input do usuario
using namespace std;

int main() {
    float base, altura, area; //variaveis float que amarzenam o valor da area da base e da altura
    
    cout << "Digite a base do triangulo: "; // interface para instrucao do usuario
    cin >> base; //entrada do valor da base pelo usuario
    
    cout << "Digite a altura do triangulo: "; // interface para instrucao do usuario
    cin >> altura; //entrada do valor do altura pelo usuario
    
    area = base*altura/2; //calculo da area
    
    cout << "A area do triangulo retangulo eh " << area << endl; //interface do usuario mostando o valor da area
}