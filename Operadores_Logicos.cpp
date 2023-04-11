#include <iostream>
using namespace std;
int main() {
    int num1=10, num2=20, num3=30; // declaracao de variaveis que contem os numeros que serao operados
    
    if (num1 < num2 && num2 < num3){
        cout << "a ordem eh num1, num2, num3" << endl;
    }//exemplo operador and (&&)
    
    if (num1 >= num2 || num2 < num3){
        cout << "Uma das condicoes está correta" << endl;
    }//exemplo operador or (||)
    
    if (!(num1 == num2)){
        cout << "num1 é diferente de num2" << endl;
    }//exemplo operador not (!)
    
    return 0;
}