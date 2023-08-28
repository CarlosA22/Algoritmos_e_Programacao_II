#include <iostream>
using namespace std;

int resto( int n1, int n2 ){
    if( n1 > n2){
        while( n1 >= n2 ) n1 -= n2;
        return n1;
    } else {
        while( n2 >= n1 ) n2 -= n1;
        return n2;
    }
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

    cout << "Resto = " << resto(num1, num2);
    cout << endl;
}
