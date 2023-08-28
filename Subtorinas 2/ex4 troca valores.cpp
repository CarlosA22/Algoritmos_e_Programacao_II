#include <iostream>
using namespace std;

int trocaValores(int &valor1, int &valor2)
{
    int temp = 0;

    temp = valor1;
    valor1 = valor2;
    valor2 = temp;


    return 0;
}

int main()
{
    int valor1 = 0, valor2 = 0;

    cout << "\nDigite 2 valores:\n";
    cin >> valor1 >> valor2;

    trocaValores(valor1,valor2);
    cout << valor1 << "\n" << valor2;
    
    return 0;
}