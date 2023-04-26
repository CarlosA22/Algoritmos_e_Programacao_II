#include<iostream>
using namespace std;

#define TAM 5

bool vetor(int vetA[TAM], int vetB[TAM]){
    int i;
    
    cout<<"Insira o vetor A: ";
    for(i=0;i<TAM;i++){
        cin>>vetA[TAM];
    }
    cout<<"Insira o vetor B: ";
    for(i=0;i<TAM;i++){
        cin>>vetB[TAM];
    }

    if((vetA[i] / vetB[i])%2 == 0){
        return false;
    }else{
        return true;
    }
    
}

int main(){
    int vetA[TAM], vetB[TAM];

    vetor(vetA,vetB);

    cout<<vetor(vetA,vetB);

}