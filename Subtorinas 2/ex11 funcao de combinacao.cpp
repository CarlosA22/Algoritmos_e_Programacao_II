#include <iostream>

using namespace std;

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int formula(int n, int k)
{
	int auxiliar = 0;

	auxiliar = factorial(n) / (factorial(k) * factorial(n - k));

	return auxiliar;
}

int main()
{
	int n = 0, k = 0;

	cout << " Insira um valor N e um valor K\n";
	cin >> n >> k;

	if (n < 0 || k < 0 || k > n) 
	{
		cout << " Valores invalidos para N e K\n"; return -1; 
	}

	int result = formula(n, k); 
	cout << " O resultado do calculo eh: " << result;

	return 0;
}
