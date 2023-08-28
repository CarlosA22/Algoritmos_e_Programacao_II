#include <iostream>
using namespace std;

int mdc( int n1, int n2 ){
    while( n1 != n2 ){
        if( n1 > n2 )
            n1 = n1 - n2;
        else
            n2 = n2 - n1;
    }
    return n1;
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

    cout << "MDC(" << num1 << ";" << num2 << ") = " << mdc(num1, num2);
    cout << endl;
}
