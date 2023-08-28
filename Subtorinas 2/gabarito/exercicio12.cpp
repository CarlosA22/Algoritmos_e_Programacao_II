#include <iostream>
using namespace std;

float calcular( int n ){
    float A = 0;

    for( int i=1; i<=n; i++ ){
        A += (float)(1 + i*i)/(float)i;
    }
    return A;
}

int main(){
    int n;

    do{
       cout << "Valor de n (>0): ";
       cin >> n;
    }while( n < 1);

    cout << "Resultado = " << calcular(n);
    cout << endl;
}
