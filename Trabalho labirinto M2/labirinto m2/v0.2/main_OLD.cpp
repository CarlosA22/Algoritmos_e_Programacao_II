#include <iostream>
#include <windows.h>
#include <conio.h>
#include "rotinas.h"
using namespace std;

int main()
{
    int m[10][10];
    int x,y;
    bool jogando=false;
    mostrarCursor(FALSE);
    menu(m, x, y, jogando);
    
    return 0;
}
// n tentar fazer contador sem struct, � muito longo e cansativo.