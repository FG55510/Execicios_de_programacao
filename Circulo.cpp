#include <iostream>
using namespace std;

int main() {
    float raio, area; //variaveis float que amarzenam o valor da area e do raio
    const float Pi = 3.14159; //valor constante de pi armazenado
    cout << "Digite o raio do circulo: "; // interface para instrucao do usuario
    cin >> raio; //entrada do valor do raio pelo usuario
    
    area = Pi * raio * raio; //calculo da area
    cout << "A area do circulo eh " << area << endl; //interface do usuario mostando o valor da area
}