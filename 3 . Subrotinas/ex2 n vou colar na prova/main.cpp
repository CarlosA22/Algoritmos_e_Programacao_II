#include <iostream>
#include <locale.h>

void castigo(int N){
    int i;
    for(i=1; i<=N; i++){
        std::cout<<"N�o vou colar na prova"<<std::endl;
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int N;

    std::cout<<"Digite um n�mero inteiro positivo qualquer"<<std::endl;
    std::cin>>N;
    castigo(N);

    return 0;
}
