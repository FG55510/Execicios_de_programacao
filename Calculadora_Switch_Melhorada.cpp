#include <iostream>
using namespace std;
int main() {
    
    char continua;//variavel de condicao para continuar
    
    do {//codigo que sera executado e repetido
        int nota1, nota2, nota3, nota4, soma;// declaracao das variaveis usadas
        char op;//variavel amarzenara o caracter que informa a operacao
        float num1, num2;
        
        cout << "Informe a operacao +, -, *, /: " << endl; //interface para o usuario
        cin >> op; //amazena o caracter informado pelo usuario
        cout << "Informe a operacao dois numeros " << endl; //interface para o usuario
        cin >> num1 >> num2; //amazena os numeros informado pelo usuario
        
        switch(op){ //Executa e mostra operacao para o usuario seguindo o caso de qual operador foi dado
            case '+':
            cout << num1 << "+" << num2 << "=" << num1+num2;
            break;//mostra o final para o caso
            
            case '-':
            cout << num1 << "-" << num2 << "=" << num1-num2;
            break;
            
            case '*':
            cout << num1 << "*" << num2 << "=" << num1*num2;
            break;
            
            case '/':
            cout << num1 << "/" << num2 << "=" << num1/num2;
            break;
            
            default://mensagem caso o operador nao pertenca a nenhum dos informados a cima
            cout << "Erro! insira outro operador!" << endl;
            break;
        }
        cout << " \nVoce deseja continuar? s/n: " << endl; //interface para o usuario
        cin >> continua; //armazenamento da resposta para repetir
    } while (continua == 's' || continua == 'S');//verificacao da condicao de repeticao
    return 0;
}