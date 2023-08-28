#include <iostream>
using namespace std;

void mostrar(char frase[], int m[3][3]){
    cout << frase << ": " << endl;
    for( int i=0; i<3; i++ ){
        for( int j=0; j<3; j++ ){
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

void ler_matriz(char frase[], int m[3][3]){
    cout << frase << ": " << endl;
    for( int i=0; i<3; i++ ){
        for( int j=0; j<3; j++ ){
            cout << "\tM[" << i << "; " << j << "] = ";
            cin >> m[i][j];
        }
    }
}

void somar(int a[3][3], int b[3][3], int c[3][3]){
    for( int i=0; i<3; i++ ){
        for( int j=0; j<3; j++ ){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtrair(int a[3][3], int b[3][3], int c[3][3]){
    for( int i=0; i<3; i++ ){
        for( int j=0; j<3; j++ ){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplicar(int a[3][3], int b[3][3], int c[3][3]){
    for( int i=0; i<3; i++ ){
        for( int j=0; j<3; j++ ){
            int soma=0;
            for( int k=0; k<3; k++ ){
                soma += a[i][k] * b[k][j];
            }
            c[i][j] = soma;
        }
    }
}

int main(){
    int A[3][3], B[3][3];
    int C[3][3], D[3][3], E[3][3];

    ler_matriz( "Matriz A", A);
    ler_matriz( "Matriz B", B);

    somar(A,B,C);
    subtrair(A,B,D);
    multiplicar(A,B,E);

    cout << endl;
    mostrar("Matriz A", A);
    mostrar("Matriz B", B);
    mostrar("A + B", C);
    mostrar("A - B", D);
    mostrar("A * B", E);
    cout << endl;
}
