#include <iostream>
using namespace std;

void trocar(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

int main(){
    int num1, num2;

    do{
        cout << "Digite um numero (1) (>0): ";
        cin >> num1;
    }while( num1 <= 0 );
    do{
        cout << "Digite um numero (2) (>0): ";
        cin >> num2;
    }while( num2 <= 0 );

    cout << "Num1 = " << num1 << "\tNum2 = " << num2 << endl;
    trocar(num1, num2 );
    cout << "Num1 = " << num1 << "\tNum2 = " << num2;

    cout << endl;
}
