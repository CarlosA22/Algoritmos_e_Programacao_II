#include <iostream>
#include <locale.h>

int divisor(int x, int n){
    int p,q,m;

        q=x/n;
        p=q*n;
        m=x-p;

    return 0;
}



int main(){
    setlocale(LC_ALL,"Portuguese");
    int x, n;

    std::cout<<"Digite dois números inteiros:"<<std::endl;
    std::cin>>x>>n;

    std::cout<<"O resto é:";
    divisor(x,n);
    std::cout<<divisor(x,n);

    return 0;
}
