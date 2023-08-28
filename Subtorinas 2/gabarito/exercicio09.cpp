#include <iostream>
using namespace std;

int fatorial(int n){
    int fat=1;
    for( int i=1; i<=n; i++ )
        fat = fat * i;
    return fat;
}

float calcular(float x, int n){
    float a = 0, aux;

    for( int i=1; i<=n; i++ ){
        aux = (float)(x + i + 1) / (float)fatorial(i);
        if( i%2 == 0 )
            a -= aux;
        else
            a += aux;
        //a += (i%2==0) ? -aux : aux;
    }
    return a;
}

int main(){
    int n;
    float x, a;

    do{
        cout << "Valor de n (>0): ";
        cin >> n;
    }while( n <= 0 );

    cout << "Valor de x: ";
    cin >> x;

    a = calcular(x, n);
    cout << "A = " << a << endl;
}
