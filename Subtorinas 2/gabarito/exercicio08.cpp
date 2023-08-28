#include <iostream>
using namespace std;

bool primo(int n){
    int divisor=0;
    for( int i=1; i<=n; i++ ){
        if( n%i == 0 ) divisor++;
    }
    return (divisor==2) ? true : false;
}

void acharPrimos(int quant, int num){
    int cont=0;

    while( cont<quant ){
        if( primo(num) ){
            cont++;
            cout << cont << ") " << num << endl;
        }
        num++;
    }
}

int main(){
    int q, inicio;

    do{
        cout << "Quantos numeros deseja (>0): ";
        cin >> q;
    }while( q <= 0 );
    do{
        cout << "Iniciando em qual valor (>0): ";
        cin >> inicio;
    }while( inicio <= 0 );

    acharPrimos(q, inicio);
}
