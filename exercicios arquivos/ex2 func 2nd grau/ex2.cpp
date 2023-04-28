#include <iostream>
#include <fstream>
#include <cmath>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float a,b,c;    

    std::cout<<"Digite o valor de a: ";
    std::cin>>a;
    std::cout<<"Digite o valor de b: ";
    std::cin>>b;
    std::cout<<"Digite o valor de c: ";
    std::cin>>c;

    float delta = pow(b,2) - 4*a*c;

    if(delta<0){
        std::cout<<"Não há raízes reais.";
    }else if(delta==0){
        float x = (-b + sqrt(delta))/2*a;
        std::cout<<"A raiz é: "<<x;
    }else{
        float x1 = (-b + sqrt(delta))/2*a;
        float x2 = (-b - sqrt(delta))/2*a;
        std::cout<<"As raízes são: "<<x1<<" e "<<x2;
    }

    return 0;

}