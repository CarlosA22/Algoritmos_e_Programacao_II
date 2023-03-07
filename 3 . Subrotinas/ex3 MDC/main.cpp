#include <iostream>
#include <locale.h>

int MDC(float a, float b){
    while(a != b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    setlocale(LC_ALL,"Portguese");

    float a,b;
    std::cout<<"Digite dois números para calcular o MDC"<<std::endl;
    std::cin>>a>>b;

    std::cout<<MDC(a,b);


    return 0;
}
