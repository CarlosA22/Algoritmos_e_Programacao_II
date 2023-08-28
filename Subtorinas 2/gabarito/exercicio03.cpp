#include <iostream>
using namespace std;

float pesoIdeal(char s, float a){
    if( s == 'M' || s == 'm' )
        return 72.7 * a - 58;
    else
        return 62.1 * a - 44.7;
}

int main(){
    float altura, peso;
    char sexo;

    do{
        cout << "Qual o sexo da pessoa (M/F)? ";
        cin >> sexo;
    }while( sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') ;

    do{
        cout << "Qual a altura (em metros)? ";
        cin >> altura;
    }while( altura <= 0 );

    peso = pesoIdeal( sexo, altura );

    if( sexo == 'F' || sexo == 'f' ){
        cout << "O peso ideal de uma mulher de " << altura;
        cout << "m eh de " << peso << "Kg";
    } else {
        cout << "O peso ideal de um home de " << altura;
        cout << "m eh de " << peso << "Kg";
    }

    cout << endl;
}
