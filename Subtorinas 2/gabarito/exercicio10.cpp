#include <iostream>
using namespace std;

int somar_divisores( int n ){
    int soma = 0;
    for( int i=1; i<n; i++ ){
        if( n%i == 0 ) soma += i;
    }
    return soma;
}

bool amigos(int a, int b){
    if( somar_divisores(a)== b && somar_divisores(b)==a )
        return true;
    else
        return false;
}

int main(){
    int n1, n2;

    do{
        cout << "Valor de n1 (>0): ";
        cin >> n1;
    }while( n1 <= 0 );

    do{
        cout << "Valor de n2 (>0): ";
        cin >> n2;
    }while( n2 <= 0 );

    if( amigos(n1,n2) )
        cout << "(" << n1 << ";" << n2 << ") sao amigos!";
    else
        cout << "(" << n1 << ";" << n2 << ") nao sao amigos!";
    cout << endl;
}
