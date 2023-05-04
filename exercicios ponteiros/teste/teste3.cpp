#include <iostream>
using namespace std;

int main()
{
    int *pont1, v = 5;
    pont1 = &v;
    cout<<endl<<*pont1;
    cout<<endl<<pont1;
    cout<<endl<<&pont1;

    return 0;

}