#include <iostream>
using namespace std;

float calcular(int x){
    float e=0;

    for( int i=1; i<=x; i++ ){
        e += (float)x / (float)i;
    }
    return e;
}

int main(){
    float soma=0;

    for( int i=5; i<=15; i++ ){
        float resultado = calcular(i);
        soma += resultado;
        cout << "E(" << i << ") = " << resultado << endl;
    }
    cout << "Soma [5;15] = " << soma;
    cout << endl;
}
