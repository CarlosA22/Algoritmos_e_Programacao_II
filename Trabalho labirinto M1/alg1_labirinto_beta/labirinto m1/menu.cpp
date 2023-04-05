#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;


int menu(int opcao){

        cout << "S O K O B A N !" << endl;
        cout << "Escolha uma opcao:" << endl;
        cout << "1 - Novo Jogo" << endl;
        cout << "2 - Carregar" << endl;
        cout << "3 - Sobre" << endl;
        cout << "4 - Sair" << endl;
        cin >> opcao;


        
    return opcao;
}