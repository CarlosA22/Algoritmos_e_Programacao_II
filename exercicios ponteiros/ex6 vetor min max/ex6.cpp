#include <iostream>
using namespace std;

void mm(int (&v)[10])
{
    int i,min,max;
    cout<<"Digite numeros para o vetor v: ";

    for(int i=0;i<10;i++)
    {
        cin>>v[i];
    }
    cout<<v[i];

}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int v[10]={0};
    mm(v);

}