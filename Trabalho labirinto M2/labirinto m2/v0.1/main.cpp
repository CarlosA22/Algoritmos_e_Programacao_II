/**
    Estrutura inicial para um jogo de labirinto
    versão: 0.1 (Felski)
*/
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

struct MAPA
{
    char *arquivo;
    int linha, coluna;

    void carregaAG1(int ag1[10][7])
    {
        ifstream stream;
        stream.open(arquivo);

        if (stream.is_open())
        {
            stream >> linha;
            stream >> coluna;
            for (int i = 0; i < linha; i++)
            {
                for (int j = 0; j < coluna; j++)
                {
                    stream >> ag1[i][j];
                }
            }
        }
        else
        {
            cout << "ERRO";
        }
    }

    void carregaAG8(int ag8[9][8])
    {
        ifstream stream;
        stream.open(arquivo);

        if (stream.is_open())
        {
            stream >> linha;
            stream >> coluna;
            for (int i = 0; i < linha; i++)
            {
                for (int j = 0; j < coluna; j++)
                {
                    stream >> ag8[i][j];
                }
            }
        }
        else
        {
            cout << "ERRO";
        }
    }

    void carregaAG13(int ag13[10][8])
    {
        ifstream stream;
        stream.open(arquivo);

        if (stream.is_open())
        {
            stream >> linha;
            stream >> coluna;
            for (int i = 0; i < linha; i++)
            {
                for (int j = 0; j < coluna; j++)
                {
                    stream >> ag13[i][j];
                }
            }
        }
        else
        {
            cout << "ERRO";
        }
    }
};



void nmecher(COORD &coord)
{
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

void posicaoxy(int column, int line)
{
    COORD coord;
    nmecher(coord);
    /// Posiciona a escrita no início do console
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



void lvl1()
{
    system("cls");
    int level1, level2, level3;
    int gameover = 1;
    int passos;
    int opcao;
    int opcaolvl = rand() % 3 + 1;
    level1 = 1;
    int ag1[10][7];
    MAPA mapa;
    mapa.arquivo = "AG1.txt";
    mapa.carregaAG1(ag1);

    // Posi  o inicial do personagem no console
    int x = 2, y = 1;
    // Vari vel para tecla precionada
    char tecla;

    while (true)
    {
        posicaoxy(0,0);

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
            switch (tecla)
            {
            case 72:
            case 'w': /// cima
                if (ag1[x - 1][y] == 2 && ag1[x - 2][y] == 0 || ag1[x - 2][y] == 3)
                {
                    ag1[x - 2][y] = 2;
                    ag1[x - 1][y] = 0;
                    novo_x--;
                }
                else
                {
                    novo_x--;
                }

                break;
            case 80:
            case 's': /// baixo
                if (ag1[x + 1][y] == 2 && ag1[x + 2][y] == 0 || ag1[x + 2][y] == 3)
                {
                    ag1[x + 2][y] = 2;
                    ag1[x + 1][y] = 0;
                    novo_x++;
                }
                else
                {
                    novo_x++;
                }
                break;
            case 75:
            case 'a': /// esquerda
                if (ag1[x][y - 1] == 2 && ag1[x][y - 2] == 0 || ag1[x][y - 2] == 3)
                {
                    ag1[x][y - 2] = 2;
                    ag1[x][y - 1] = 0;
                    novo_y--;
                }
                else
                {
                    novo_y--;
                }
                break;
            case 77:
            case 'd': /// direita
                if (ag1[x][y + 1] == 2 && ag1[x][y + 2] == 0 || ag1[x][y + 2] == 3)
                {
                    ag1[x][y + 2] = 2;
                    ag1[x][y + 1] = 0;
                    novo_y++;
                }
                else
                {
                    novo_y++;
                }
                break;
            case 27:
                system("cls");

                break;
            }

            // checa se a nova posição colide com a parede.

            if (ag1[novo_x][novo_y] != 1 && ag1[novo_x][novo_y] != 2)
            {
                x = novo_x;
                y = novo_y;
            }
        }
    }
}

void menu()
{
    cout << "S O K O B A N !" << endl;
    cout << "Escolha uma opcao:" << endl;
    cout << "1 - Novo Jogo" << endl;
    cout << "2 - Carregar" << endl;
    cout << "3 - Sobre" << endl;
    cout << "4 - Sair" << endl;
}

void oplvl()
{
    cout << "Escolha um level:" << endl;
    cout << "Level 1 (Alberto Garcia 1)" << endl;
    cout << "Level 2 (Alberto Garcia 8)" << endl;
    cout << "Level 3 (Alberto Garcia 13)" << endl;
    cout << "Aleatório" << endl;
}

void sobre()
{
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

void def()
{
    cout << "Opcao invalida!" << endl;
}

int main()
{
    srand(time(NULL));
    COORD coord;
    nmecher(coord);

    int level1, level2, level3;
    int gameover = 1;
    int passos;
    int opcao;
    int opcaolvl = rand() % 3 + 1;

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
                lvl1();
                break;
            }
            case 2:
            {
                level2 = 1;
                system("cls");
                int ag8[9][8];
                MAPA mapa;
                mapa.arquivo = "AG8.txt";
                mapa.carregaAG8(ag8);

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
                            if (ag8[x - 1][y] == 2 && ag8[x - 2][y] == 0 || ag8[x - 2][y] == 3)
                            {
                                ag8[x - 2][y] = 2;
                                ag8[x - 1][y] = 0;
                                novo_x--;
                            }
                            else
                            {
                                novo_x--;
                            }
                            /// verificar se acima da caixa tinha uma posição final

                            break;
                        case 80:
                        case 's': /// baixo
                            if (ag8[x + 1][y] == 2 && ag8[x + 2][y] == 0 || ag8[x + 2][y] == 3)
                            {
                                ag8[x + 2][y] = 2;
                                ag8[x + 1][y] = 0;
                                novo_x++;
                            }
                            else
                            {
                                novo_x++;
                            }
                            break;
                        case 75:
                        case 'a': /// esquerda
                            if (ag8[x][y - 1] == 2 && ag8[x][y - 2] == 0 || ag8[x][y - 2] == 3)
                            {
                                ag8[x][y - 2] = 2;
                                ag8[x][y - 1] = 0;
                                novo_y--;
                            }
                            else
                            {
                                novo_y--;
                            }
                            break;
                        case 77:
                        case 'd': /// direita
                            if (ag8[x][y + 1] == 2 && ag8[x][y + 2] == 0 || ag8[x][y + 2] == 3)
                            {
                                ag8[x][y + 2] = 2;
                                ag8[x][y + 1] = 0;
                                novo_y++;
                            }
                            else
                            {
                                novo_y++;
                            }
                            break;
                        case 27:
                            system("cls");
                            menu();
                        }

                        // checa se a nova posição colide com a parede.

                        if (ag8[novo_x][novo_y] != 1 && ag8[novo_x][novo_y] != 2)
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
                int ag13[10][8];
                MAPA mapa;
                mapa.arquivo = "AG13.txt";
                mapa.carregaAG13(ag13);

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
                            if (ag13[x - 1][y] == 2 && ag13[x - 2][y] == 0 || ag13[x - 2][y] == 3)
                            {
                                ag13[x - 2][y] = 2;
                                ag13[x - 1][y] = 0;
                                novo_x--;
                            }
                            else
                            {
                                novo_x--;
                            }
                            break;
                        case 80:
                        case 's': /// baixo
                            if (ag13[x + 1][y] == 2 && ag13[x + 2][y] == 0 || ag13[x + 2][y] == 3)
                            {
                                ag13[x + 2][y] = 2;
                                ag13[x + 1][y] = 0;
                                novo_x++;
                            }
                            else
                            {
                                novo_x++;
                            }
                            break;
                        case 75:
                        case 'a': /// esquerda
                            if (ag13[x][y - 1] == 2 && ag13[x][y - 2] == 0 || ag13[x][y - 2] == 3)
                            {
                                ag13[x][y - 2] = 2;
                                ag13[x][y - 1] = 0;
                                novo_y--;
                            }
                            else
                            {
                                novo_y--;
                            }
                            break;
                        case 77:
                        case 'd': /// direita
                            if (ag13[x][y + 1] == 2 && ag13[x][y + 2] == 0 || ag13[x][y + 2] == 3)
                            {
                                ag13[x][y + 2] = 2;
                                ag13[x][y + 1] = 0;
                                novo_y++;
                            }
                            else
                            {
                                novo_y++;
                            }
                            break;
                        case 27:
                            system("cls");
                            menu();

                            break;
                        }

                        // checa se a nova posição colide com a parede.

                        if (ag13[novo_x][novo_y] != 1 && ag13[novo_x][novo_y] != 2)
                        {
                            x = novo_x;
                            y = novo_y;
                        }
                    }
                }
            }
            break;
            case 4:
            {
                ;
            }
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
        {
            sobre();
            break;
        }

        case 4:
        {
            return 0;
            break;
        }

        default:
            def();
            break;
        }
    }
} // fim main