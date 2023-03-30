#include <iostream>
using namespace std;

int pri(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void pri100(){
    int n=100;
        for(int cont=1; cont<=10; cont++){
            if(pri(n)==1){
                cout<<n<<endl;
            }else{
                cont--;
            }
            n++;
        }
}

int main(){
    
    cout<<"\n 10 primeiros números primos a partir do 100: ";
    pri100();

    return 0;
}