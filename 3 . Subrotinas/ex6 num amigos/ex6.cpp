#include <iostream>
using namespace std;

int namigos(int a, int b){
    int aa=0, bb=0;
    for(int i=1; i<a; i++){
        if (a%i==0){
            aa=aa+i;
        }
    }
    for(int i=1; i<b; i++){
        if (b%i==0){
            bb=bb+i;
        }
    }
    if(aa==b && bb==a){
        return 1;
    }
    return 0;
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int a,b;

    cout<<"Insira um algarismo A: "<<endl;
    cin>>a;

    cout<<"Insira um algarismo B: "<<endl;
    cin>>b;

    if(namigos(a,b)){
        cout<<a<<" é amigo de: "<<b;
    }else{
        cout<<a<<" Não é amigo de: "<<b;
    }

    return 0;
}