#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void preecher_aleatorio(int vetor[], int tam){
    for( int i=0; i<tam; i++ )
        vetor[i] = rand() % 100 + 1;
}

void mostrar_vetor(char frase[], int vetor[], int tam){
    cout << frase << ": ";
    for( int i=0; i<tam; i++ )
        cout << vetor[i] << " ";
    cout << endl;
}

bool eh_primo(int x){
    int d=0;
    for( int i=1; i<=x; i++ ){
        if( x%i==0 ) d++;
    }
    if( d==2 )
        return true;
    else
        return false;
}

void eliminar_primos(int v[], int tam){
    for( int i=0; i<tam; i++ ){
        if( eh_primo(v[i]) ) v[i] = 0;
    }
}

int main(){
    srand(time(NULL));

    int v[25];

    preecher_aleatorio(v, 25);
    mostrar_vetor("Vetor", v, 25);
    eliminar_primos(v,25);
    mostrar_vetor("Vetor", v, 25);

    cout << endl;
}
