#include <iostream>
using namespace std;
int main() {
    int num1=10, num2=20; // declaracao de variaveis que contem os numeros que serao operados
    
    if (num1 > num2){
        cout << "num1 é maior que num2" << endl;
    } //caso num1 seja maior mostre esta informacao na tela
    
    if (num1 < num2){
        cout << "num1 é menor que num2" << endl;
    }//caso num1 seja menor mostre esta informacao na tela
    
    if (num1 >= num2){
        cout << "num1 é maior ou igual que num2" << endl;
    }//caso num1 seja maior ou igual a num2 mostre esta informacao na tela
    
    if (num1 <= num2){
        cout << "num1 é menor ou igual que num2" << endl;
    }//caso num1 seja menor ou igual a num2 mostre esta informacao na tela
    
    if (num1 == num2){
        cout << "num1 é igual que num2" << endl;
    }//caso num1 seja igual a num2 mostre esta informacao na tela
    
    if (num1 != num2){
        cout << "num1 é diferente que num2" << endl;
    }//caso num1 seja diferende de num2 mostre esta informacao na tela
    
    return 0;
}