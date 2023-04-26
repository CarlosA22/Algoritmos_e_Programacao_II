#include <iostream>
using namespace std;

float series(int n){
    float s=0;

    for(int i=1;i<=n;i++){
        s=s+(1.0+i*i)/i;
    }
    return s;
}

int main(){
    int n;

    cout<<"Digite um n�mero real: ";
    cin>>n;
    cout<<"\nS�rie: "<<series(n);
    
    return 0;
}