#include <iostream>
#include <fstream>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    ifstream equacaoQuadratica;
    equacaoQuadratica.open ("equacaoQuadratica.txt");
    
    string equacao;
    while (equacaoQuadratica.eof()==false){
        getline(equacaoQuadratica,equacao);
        cout<<equacao<<"\n";
    }

    equacaoQuadratica.close();

    return 0;
}