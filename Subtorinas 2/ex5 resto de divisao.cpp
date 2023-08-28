#include <iostream>
using namespace std;

int Sla(int num1, int num2) //mostra o resto da divisao usando somente soma e subtração
{
    int resto = 0;
    resto = num1; 

    while (resto >= num2) //enquanto o Resto for maior ou igual a num2, faça R = R - B
    {
        resto = resto - num2;
        cout << resto;
    }

    return resto;
}

int main()
{
    int num1 = 0, num2 = 0;

    cin >> num1 >> num2;
    Sla(num1, num2);


    return 0;
}
