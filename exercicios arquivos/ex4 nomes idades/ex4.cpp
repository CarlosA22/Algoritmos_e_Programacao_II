#include <iostream>
#include <fstream>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    string nome;
    int idade;

    cout<<"Insira um nome: ";
    cin>>nome;
    cout<<"Insira a idade: ";
    cin>>idade;

    fstream dados;
    dados.open ("dados.txt");
    
    dados<<nome<<"\t"<<idade<<"\n";
    dados.close();
    dados.is_open();
    dados.open ("dados.txt");
    string dadosstring;
    while (dados.eof()==false){
        getline(dados,dadosstring);
        cout<<dadosstring<<"\n";
    }

    dados.close();

    return 0;
}