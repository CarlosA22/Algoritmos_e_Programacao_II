#include <iostream>


bool nperfeito(int num){
    int soma=1,i=2;
        if (num % i==0){
            soma += i;
            if (i != num/i){
                soma += num/i;
            }
        }

    return soma == num;
}



int main(){
    setlocale(LC_ALL,"Portuguese");

    int num;

    std::cout<<"Insira um número inteiro: "<<std::endl;
    std::cin>>num;


    if (nperfeito(num)){
        std::cout<<num<<" é um número perfeito."<<std::endl;
    }else{
        std::cout<<num<<" não é um número perfeito."<<std::endl;
    }

    return 0;
}
