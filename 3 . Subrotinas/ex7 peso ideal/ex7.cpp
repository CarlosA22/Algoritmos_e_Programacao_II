#include <iostream>
using namespace std;

float  IMC(float hom, float mul, float alt){
    int opcao;
    float pi;

    pi=0;
    cout<<"Selecione o seu sexo:\n0- Masculino \n1 - Feminino\n";
    cin>>opcao;

         switch(opcao){
        case 0:
            cout<<"Insira a sua altura: ";
            cin>>alt;
            pi = 72.7 * alt - 58;
            cout<<"\nSeu peso ideal é: "<<pi;
            break;
        case 1:
            cout<<"Insira a sua altura: ";
            cin>>alt;
            pi = 62.1 * alt - 44.7;
            cout<<"\nSeu peso ideal é: "<<pi;
            break;
        default:
            cout<<"Valor fora da faixa";
    }



   
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int hom,mul,alt;

    IMC(hom,mul,alt);


    
    return 0;
}