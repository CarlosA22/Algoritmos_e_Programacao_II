#include <iostream>
using namespace std;

//void troca(int *i, int *j)
//{
//    int *temp;
//    *temp = *i;
//    cout<<*temp<<endl;  //está errado pois tem * no temp, isso pode causar um loop infinito em certos compiladores
//    *i = *j;            //pois iria ficar praticamente apontando um para  o outro sem parar.
//    cout<<*i<<endl;
//    *j = *temp;
//    cout<<*j<<endl;
//}

void troca(int *i, int *j)
{
    int *temp;
    *temp = *i;
    cout<<*temp<<endl; //assim está certo pois não iria ficar apontando sem parar  
    *i = *j;          
    cout<<*i<<endl;
    *j = *temp;
    cout<<*j<<endl;
}

int main(){
    int *i,*j;

    troca(i,j);
}