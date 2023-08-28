#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void preecher_aleatorio(int m[6][6]){
    for( int i=0; i<6; i++ ){
        for( int j=0; j<6; j++ ){
            m[i][j] = rand()%10;
        }
    }
}

void mostrar(char frase[], int m[6][6]){
    cout << frase << ": " << endl;
    for( int i=0; i<6; i++ ){
        for( int j=0; j<6; j++ ){
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

void multiplicar(int m[6][6]){
    for( int i=0; i<6; i++ ){
        int aux = m[i][i];
        for( int j=0; j<6; j++ ){
            m[i][j] *= aux;
        }
    }
}

int main(){
    srand(time(NULL));

    int mat[6][6];

    preecher_aleatorio(mat);
    mostrar("Matriz", mat);
    multiplicar(mat);
    mostrar("Matriz", mat);

    cout << endl;
}
