#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int idade,semestre,codigo;
    char sexo;
    string nome;
    cout<<"nome: ";
    cin>>nome;
    cout<<"sexo: ";
    cin>>sexo;
    cout<<"idade: ";
    cin>>idade;
    cout<<"semestre: ";
    cin>>semestre;
    cout<<"código: ";
    cin>>codigo;

    ofstream alunos;
    alunos.open ("dados_alunos.txt");
    alunos <<nome<<sexo<<idade<<semestre<<codigo;
    alunos.close();

    return 0;
}