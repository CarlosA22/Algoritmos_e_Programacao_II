#include <iostream>
using namespace std;

bool perfeito( int n ){
    int soma=0;

    for( int i=1; i<n; i++ ){
        if( n % i == 0 ) soma += i;
    }
    if( soma == n )
        return true;
    else
        return false;
    // return (soma==n) ? true : false;
}

int main(){
    int num;

    do{
        cout << "Digite um numero (>0): ";
        cin >> num;
    }while( num <= 0 );

    if( perfeito(num) )
        cout << num << " eh perfeito";
    else
        cout << num << " nao eh perfeito";

    cout << endl;
}
