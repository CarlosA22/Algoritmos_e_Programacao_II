﻿/**
    Estrutura inicial para um jogo de labirinto
    versão: 0.1 (Felski)
*/
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void menu(){
        cout << "S O K O B A N !" << endl;
        cout << "Escolha uma opcao:" << endl;
        cout << "1 - Novo Jogo" << endl;
        cout << "2 - Carregar" << endl;
        cout << "3 - Sobre" << endl;
        cout << "4 - Sair" << endl;
}

void oplvl(){
        cout << "Escolha um level:" << endl;
        cout << "Level 1 (Alberto Garcia 1)" << endl;
        cout << "Level 2 (Alberto Garcia 8)" << endl;
        cout << "Level 3 (Alberto Garcia 13)" << endl;
        cout << "???" << endl;
}

void sobre(){
        cout << "S O K O B A N !\n";
        cout << "Versão 0.2\n";
        cout << "Como jogar: \n";
        cout << "1 - Mova as caixas para os pontos de destino.\n";
        cout << "2 - A pontuação é a quantidade de movimentos, quanto mais passos menor a pontuação\n";
        cout << "3 - Para mover use as teclas WASD\n";
        cout << "4 - Para voltar ao menu use a tecla ESC\n";
        cout << "5 - Para voltar onde voce parou selecione a opcao carregar\n";
        cout << "Para sair desse menu aperte qualquer tecla\n";
        system("pause");
}

void def(){
    cout << "Opcao invalida!" << endl;
}

void nmecher(COORD &coord){
        /// ALERTA: N O MODIFICAR O TRECHO DE C DIGO, A SEGUIR.
    // INICIO: COMANDOS PARA QUE O CURSOR N O FIQUE PISCANDO NA TELA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    // FIM: COMANDOS PARA QUE O CURSOR N O FIQUE PISCANDO NA TELA
    // IN CIO: COMANDOS PARA REPOSICIONAR O CURSOR NO IN CIO DA TELA
    short int CX = 0, CY = 0;
    coord.X = CX;
    coord.Y = CY;
    // FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO IN CIO DA TELA
    /// ALERTA: N O MODIFICAR O TRECHO DE C DIGO, ACIMA.
}


int main()
{
    COORD coord;
    nmecher(coord);

    int level1, level2, level3, debug;
    int gameover = 1;
    int passos;
    int opcao, opcaolvl;

    while (gameover == 1)
    {
        menu();
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            oplvl();
            cin >> opcaolvl;
            switch (opcaolvl)
            {
            case 1:
            {
                system("cls");
                level1 = 1;
                int ag1[10][7] = {1, 1, 1, 1, 1, 0, 0,
                                  1, 0, 0, 0, 0, 1, 0,
                                  1, 0, 2, 0, 0, 0, 1,
                                  1, 1, 0, 2, 0, 0, 1,
                                  0, 1, 1, 0, 2, 0, 1,
                                  0, 0, 1, 1, 0, 0, 1,
                                  0, 0, 0, 1, 1, 3, 1,
                                  0, 0, 0, 0, 1, 3, 1,
                                  0, 0, 0, 0, 1, 3, 1,
                                  0, 0, 0, 0, 1, 1, 1};

                // Posi  o inicial do personagem no console
                int x = 2, y = 1;
                // Vari vel para tecla precionada
                char tecla;

                while (true)
                {
                    /// Posiciona a escrita no início do console
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

                    /// Imprime o jogo: mapa e personagem.
                    for (int i = 0; i < 10; i++)
                    {
                        for (int j = 0; j < 7; j++)
                        {
                            if (i == x && j == y)
                            {
                                cout << char(2); // personagem
                            }
                            else
                            {
                                switch (ag1[i][j])
                                {
                                case 0:
                                    cout << " ";
                                    break; // caminho
                                case 1:
                                    cout << char(219);
                                    break; // parede
                                case 2:
                                    cout << char(35);
                                    break; // caixa
                                case 3:
                                    cout << char(111);
                                    break; // destino
                                    // default: cout<<"-"; //erro
                                } // fim switch
                            }
                        }
                        cout << "\n";

                    } // fim for mapa

                   // executa os movimentos
                    if (_kbhit())
                    {
                        tecla = _getch();
                        int novo_x = x, novo_y = y;
                        // adiciona variáveis para armazenar coordenadas de caixa adjacente ao jogador
                        int caixa_x, caixa_y;

                        // define coordenadas de caixa com base na direção do movimento
                        switch (tecla)
                        {
                        case 72:
                        case 'w': /// cima
                            caixa_x = novo_x - 1;
                            caixa_y = novo_y;
                            novo_x--;
                            break;
                        case 80:
                        case 's': /// baixo
                            caixa_x = novo_x + 1;
                            caixa_y = novo_y;
                            novo_x++;
                            break;
                        case 75:
                        case 'a': /// esquerda
                            caixa_x = novo_x;
                            caixa_y = novo_y - 1;
                            novo_y--;
                            break;
                        case 77:
                        case 'd': /// direita
                            caixa_x = novo_x;
                            caixa_y = novo_y + 1;
                            novo_y++;
                            break;
                        }

                        // checa se a nova posição colide com a parede.

                        if (ag1[novo_x][novo_y] != 1)
                        {
                            x = novo_x;
                            y = novo_y;
                        }
                    }
                }
            }
            break;
            case 2:
            {
                level2 = 1;
                system("cls");
                int ag8[9][8] = {0, 0, 0, 1, 1, 1, 1, 0,
                                 0, 0, 0, 1, 0, 0, 1, 0,
                                 0, 0, 0, 1, 0, 0, 1, 0,
                                 1, 1, 1, 1, 0, 0, 1, 0,
                                 1, 0, 0, 1, 0, 1, 1, 0,
                                 1, 0, 0, 0, 2, 0, 1, 0,
                                 1, 1, 1, 0, 0, 2, 1, 1,
                                 0, 0, 1, 1, 3, 0, 3, 1,
                                 0, 0, 0, 1, 1, 1, 1, 1};

                // Posi  o inicial do personagem no console
                int x = 5, y = 1;
                // Vari vel para tecla precionada
                char tecla;

                while (true)
                {
                    /// Posiciona a escrita no início do console
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

                    /// Imprime o jogo: mapa e personagem.
                    for (int i = 0; i < 9; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            if (i == x && j == y)
                            {
                                cout << char(2); // personagem
                            }
                            else
                            {
                                switch (ag8[i][j])
                                {
                                case 0:
                                    cout << " ";
                                    break; // caminho
                                case 1:
                                    cout << char(219);
                                    break; // parede
                                case 2:
                                    cout << char(35);
                                    break; // caixa
                                case 3:
                                    cout << char(111);
                                    break; // destino
                                    // default: cout<<"-"; //erro
                                } // fim switch
                            }
                        }
                        cout << "\n";
                    } // fim for mapa

                    // executa os movimentos
                    if (_kbhit())
                    {
                        tecla = _getch();
                        int novo_x = x, novo_y = y;
                        // adiciona variáveis para armazenar coordenadas de caixa adjacente ao jogador
                        int caixa_x, caixa_y;

                        // define coordenadas de caixa com base na direção do movimento
                        switch (tecla)
                        {
                        case 72:
                        case 'w': /// cima
                            caixa_x = novo_x - 1;
                            caixa_y = novo_y;
                            novo_x--;
                            break;
                        case 80:
                        case 's': /// baixo
                            caixa_x = novo_x + 1;
                            caixa_y = novo_y;
                            novo_x++;
                            break;
                        case 75:
                        case 'a': /// esquerda
                            caixa_x = novo_x;
                            caixa_y = novo_y - 1;
                            novo_y--;
                            break;
                        case 77:
                        case 'd': /// direita
                            caixa_x = novo_x;
                            caixa_y = novo_y + 1;
                            novo_y++;
                            break;
                        }

                        // checa se a nova posição colide com a parede.

                        if (ag8[novo_x][novo_y] != 1)
                        {
                            x = novo_x;
                            y = novo_y;
                        }
                    }
                }
            }
            break;
            case 3:
            {
                level3 = 1;
                system("cls");
                int ag13[10][8] = {1, 1, 1, 0, 0, 0, 0, 0,
                                   1, 0, 1, 1, 0, 0, 0, 0,
                                   1, 0, 0, 1, 1, 0, 0, 0,
                                   1, 0, 2, 0, 1, 1, 0, 0,
                                   1, 0, 0, 2, 0, 1, 1, 0,
                                   1, 1, 0, 0, 2, 0, 1, 1,
                                   0, 1, 1, 0, 0, 2, 0, 1,
                                   0, 0, 1, 1, 1, 3, 3, 1,
                                   0, 0, 0, 0, 1, 3, 3, 1,
                                   0, 0, 0, 0, 1, 1, 1, 1};

                // Posi  o inicial do personagem no console
                int x = 1, y = 1;
                // Vari vel para tecla precionada
                char tecla;

                while (true)
                {
                    /// Posiciona a escrita no início do console
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

                    /// Imprime o jogo: mapa e personagem.
                    for (int i = 0; i < 10; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            if (i == x && j == y)
                            {
                                cout << char(2); // personagem
                            }
                            else
                            {
                                switch (ag13[i][j])
                                {
                                case 0:
                                    cout << " ";
                                    break; // caminho
                                case 1:
                                    cout << char(219);
                                    break; // parede
                                case 2:
                                    cout << char(35);
                                    break; // caixa
                                case 3:
                                    cout << char(111);
                                    break; // destino
                                    // default: cout<<"-"; //erro
                                } // fim switch
                            }
                        }
                        cout << "\n";
                    } // fim for mapa

                    // executa os movimentos
                    if (_kbhit())
                    {
                        tecla = _getch();
                        int novo_x = x, novo_y = y;
                        // adiciona variáveis para armazenar coordenadas de caixa adjacente ao jogador
                        int caixa_x, caixa_y;

                        // define coordenadas de caixa com base na direção do movimento
                        switch (tecla)
                        {
                        case 72:
                        case 'w': /// cima
                            caixa_x = novo_x - 1;
                            caixa_y = novo_y;
                            novo_x--;
                            break;
                        case 80:
                        case 's': /// baixo
                            caixa_x = novo_x + 1;
                            caixa_y = novo_y;
                            novo_x++;
                            break;
                        case 75:
                        case 'a': /// esquerda
                            caixa_x = novo_x;
                            caixa_y = novo_y - 1;
                            novo_y--;
                            break;
                        case 77:
                        case 'd': /// direita
                            caixa_x = novo_x;
                            caixa_y = novo_y + 1;
                            novo_y++;
                            break;
                        }

                        // checa se a nova posição colide com a parede.

                        if (ag13[novo_x][novo_y] != 1)
                        {
                            x = novo_x;
                            y = novo_y;
                        }
                    }
                }
            }
            break;
            case 0:
            {
                debug = 1;
                system("cls");
                // Mapa do jogo debug

                int d[10][10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                                 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                                 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                                 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                                 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                                 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                                 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                                 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                                 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                                 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

                // Posi  o inicial do personagem no console
                int x = 5, y = 5;
                // Vari vel para tecla precionada
                char tecla;

                while (true)
                {
                    /// Posiciona a escrita no início do console
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

                    /// Imprime o jogo: mapa e personagem.
                    for (int i = 0; i < 10; i++)
                    {
                        for (int j = 0; j < 10; j++)
                        {
                            if (i == x && j == y)
                            {
                                cout << char(2); // personagem
                            }
                            else
                            {
                                switch (d[i][j])
                                {
                                case 0:
                                    cout << " ";
                                    break; // caminho
                                case 1:
                                    cout << char(219);
                                    break; // parede
                                    // default: cout<<"-"; //erro
                                } // fim switch
                            }
                        }
                        cout << "\n";
                    } // fim for mapa

                    /// executa os movimentos
                    if (_kbhit())
                    {
                        tecla = _getch();
                        int novo_x = x, novo_y = y;
                        // adiciona variáveis para armazenar coordenadas de caixa adjacente ao jogador
                        int caixa_x, caixa_y;

                        // define coordenadas de caixa com base na direção do movimento
                        switch (tecla)
                        {
                        case 72:
                        case 'w': /// cima
                            caixa_x = novo_x - 1;
                            caixa_y = novo_y;
                            novo_x--;
                            break;
                        case 80:
                        case 's': /// baixo
                            caixa_x = novo_x + 1;
                            caixa_y = novo_y;
                            novo_x++;
                            break;
                        case 75:
                        case 'a': /// esquerda
                            caixa_x = novo_x;
                            caixa_y = novo_y - 1;
                            novo_y--;
                            break;
                        case 77:
                        case 'd': /// direita
                            caixa_x = novo_x;
                            caixa_y = novo_y + 1;
                            novo_y++;
                            break;
                        }

                        // checa se a nova posição colide com a parede.

                        if (d[novo_x][novo_y] != 1)
                        {
                            x = novo_x;
                            y = novo_y;
                        }
                    }
                }
            } // fim do laço do jogo
            break;
            default:
                def();
                break;
            }
            break;
        // case 2:
        // system("cls");
        // cout << "Carregando..." << endl;
        // break;
        case 3:
            sobre();
            break;

        case 4:
            return 0;
            break;

        default:
            def();
            break;
        }
    }
} // fim main
