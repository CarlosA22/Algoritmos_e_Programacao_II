#include <iostream>
using namespace std;

void hm1(int mnts, int *h, int *m)
{
    *h = mnts / 60;
    *m = mnts % 60;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mnts, h, m;

    cin >> mnts;
    hm1(mnts, &h, &m);
    cout << h << ":" << m << endl;

    return 0;
}