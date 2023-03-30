#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;


int menu(){
    int opcao;
    cout << "1 - Jogar" << endl;
    cout << "2 - Sair" << endl;
    cout << "3 - Sobre" << endl;
    cin >> opcao;
    return opcao;
}