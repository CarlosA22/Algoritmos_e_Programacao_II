#include <iostream>
using namespace std;

void ler_vetor(int v[], int tam){
    for( int i=0; i<tam; i++ ){
        cout << "\tvetor[" << i << "] = ";
        cin >> v[i];
    }
}

float media(int v[], int tam){
    int soma = 0;
    for( int i=0; i<tam; i++ )
        soma += v[i];
    return (float)soma/(float)tam;
}

bool verificar(int v1[], int v2[]){
    if( media(v1,5) == media(v2,5) )
        return true;
    else
        return false;
}

int main(){
    int v1[5], v2[5];

    cout << "Primeiro vetor:" << endl;
    ler_vetor(v1,5);
    cout << endl << "Segundo vetor:" << endl;
    ler_vetor(v2,5);

    if( verificar(v1,v2) )
        cout << "Vetores com media igual";
    else
        cout << "Vetores com media diferente";

    cout << endl;
}
