#include <iostream>

using namespace std;

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

double serie(int n)
{
	if (n == 0)
		return 1;
	else
		return (1.0 / factorial(n)) + serie(n - 1);
}

int main()
{
	int n;
	cout << "Insira um numero: ";
	cin >> n;
	cout << "O resultado da serie eh: " << serie(n) << endl;


	return 0;
}