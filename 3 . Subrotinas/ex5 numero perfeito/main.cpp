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

    std::cout<<"Insira um n�mero inteiro: "<<std::endl;
    std::cin>>num;


    if (nperfeito(num)){
        std::cout<<num<<" � um n�mero perfeito."<<std::endl;
    }else{
        std::cout<<num<<" n�o � um n�mero perfeito."<<std::endl;
    }

    return 0;
}
