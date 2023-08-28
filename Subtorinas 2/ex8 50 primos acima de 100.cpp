#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int Prime100plus()
{
    int n = 100;

    for (int n = 100; n <= 150; n++)
    {
        if (isPrime(n) == true) 
        {
            cout << n<<"\n";
            n++;
        }
    }

    return n;
}

int main()
{
    int n = 0;

    Prime100plus();
    cout << n;

	return 0;
}