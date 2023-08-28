#include <iostream>
using namespace std;

int fatorial(int n){
    int fat = 1;
    for( int i=1; i<=n; i++ )
        fat = fat * i;
    return fat;
}

int combinacao( int n, int k ){
    int res = fatorial(n) / (fatorial(k) * fatorial(n-k));
    return res;
}

int main(){
    int n,k;

    do{
       cout << "Valor de n (>1): ";
       cin >> n;
    }while( n <= 1);
    do{
        cout << "Valor de k (>1 e <=n): ";
        cin >>k;
    }while( k <= 1 || k > n);

    cout << "C(n,k) = " << combinacao(n,k);
    cout << endl;
}
