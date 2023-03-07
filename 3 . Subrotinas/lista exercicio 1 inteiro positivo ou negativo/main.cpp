#include <iostream>
#include <locale.h>

int verif(int valor){
    if(valor>0){
        return 1;
    }return 0;
}


int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    std::cout<<"Digite um valor inteiro"<<std::endl;
    std::cin>>a;
    std::cout<<verif(a);
    return 0;
}
