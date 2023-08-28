#include <iostream>
using namespace std;

int testarNumero( int x ){
    if( x > 0 )
        return 1;  // Positivo
    else
        return 0;  // Negativo
}

int main(){
    int num;

    do{
        cout << "Digite um numero: ";
        cin >> num;
    }while( num == 0 );

    if( testarNumero(num) == 1 )
        cout << num << " eh positivo";
    else
        cout << num << " eh negativo";
    cout << endl;
}
