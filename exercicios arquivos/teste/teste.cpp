#include <fstream>
using namespace std;

int main(){
    ofstream meu_arquivo;
    meu_arquivo.open ("exemplo.txt");
    meu_arquivo << "Escrevendo nesse arquivo.\n";
    meu_arquivo.close();
    return 0;
}