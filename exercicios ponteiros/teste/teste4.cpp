#include <iostream>
using namespace std;

int main()
{
    int *p1,*p2,v=5,x=3;

    p1=&v; // p1 recebe endereço de v
    p2=&x; // p2 recebe endereço de x
    *p1=*p2; 
    cout<<*p1<<"\n"<<*p2<<"\n";

    *p1 = 9;
    cout<<"\n\n"<<*p1<<"\n"<<*p2;

    p2=p1;
    cout<<endl<<endl<<*p1;
    cout<<endl<<*p2;

    *p2=10;
    cout<<"\n\n"<<*p1<<"\n"<<*p2;

    return 0;

}