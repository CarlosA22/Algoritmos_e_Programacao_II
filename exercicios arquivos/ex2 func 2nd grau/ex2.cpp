#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    float a,b,c;    

    ofstream equacaoQuadratica;
    equacaoQuadratica.open ("equacaoQuadratica.txt");

    cout<<"Digite o valor de a: ";
    cin>>a;
    cout<<"Digite o valor de b: ";
    cin>>b;
    cout<<"Digite o valor de c: ";
    cin>>c;

    float delta = pow(b,2) - 4*a*c;

    equacaoQuadratica<<"a = "<<a<<"*x�\n"<<"b = "<<b<<"*x\n"<<"c = "<<c;

    if(delta<0){
        equacaoQuadratica<<"\nN�o h� ra�zes reais.";
    }else if(delta==0){
        float x = (-b + sqrt(delta))/2*a;
        equacaoQuadratica<<"\nA raiz �: "<<x;
    }else{
        float x1 = (-b + sqrt(delta))/2*a;
        float x2 = (-b - sqrt(delta))/2*a;
        equacaoQuadratica<<"\nAs ra�zes s�o: "<<x1<<" e "<<x2;
    }

    return 0;

}