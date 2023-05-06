/**
    Estrutura inicial para um jogo de labirinto
    versão: 0.1 (Felski)
*/
#include <iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>

using namespace std;

struct MAPA {
    string arquivo;
    int linha,coluna;


    void carrega(int m[7][7]){
        ifstream stream;
        stream.open(arquivo);

        if (stream.is_open()){
            stream>>linha;
            stream>>coluna;
            for(int i=0; i<linha; i++){
                for(int j=0; j<coluna; j++){
                    stream>>m[i][j];
                }
            }
        } else {
            cout<<"não foi";
        }
    }

};

int main()
{
    ///ALERTA: N�O MODIFICAR O TRECHO DE C�DIGO, A SEGUIR.
        //INICIO: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
        HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO     cursorInfo;
        GetConsoleCursorInfo(out, &cursorInfo);
        cursorInfo.bVisible = false; // set the cursor visibility
        SetConsoleCursorInfo(out, &cursorInfo);
        //FIM: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
        //IN�CIO: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
        short int CX=0, CY=0;
        COORD coord;
        coord.X = CX;
        coord.Y = CY;
        //FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
    ///ALERTA: N�O MODIFICAR O TRECHO DE C�DIGO, ACIMA.

    int m[7][7];
    MAPA mapa;
    string a;
    cout<<"Informe o mapa: ";
    cin>>a;
    a = "mapas/"+a+".txt";
    system("cls");
    mapa.arquivo=a;
    mapa.carrega(m);

    //Posi��o inicial do personagem no console
    int x=5, y=5;
    //Vari�vel para tecla precionada
    char tecla;

    while(true){
        ///Posiciona a escrita no início do console
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

        ///Imprime o jogo: mapa e personagem.
        for(int i=0;i<mapa.linha;i++){
            for(int j=0;j<mapa.coluna;j++){
                if(i==x && j==y){
                    cout<<char(2); //personagem
                } else {
                    switch (m[i][j]){
                        case 0: cout<<" "; break; //caminho
                        case 1: cout<<char(219); break; //parede
                        //default: cout<<"-"; //erro
                    } //fim switch
                }
            }
            cout<<"\n";
        } //fim for mapa

        ///executa os movimentos
         if ( _kbhit() ){
            tecla = _getch();
            switch(tecla)
            {
                case 72: case 'w': ///cima
                    x--;
                break;
                case 80: case 's': ///baixo
                    x++;
                break;
                case 75:case 'a': ///esquerda
                    y--;
                break;
                case 77: case 'd': ///direita
                    y++;
                break;
            }
         }


    } //fim do laço do jogo

    return 0;
} //fim main
