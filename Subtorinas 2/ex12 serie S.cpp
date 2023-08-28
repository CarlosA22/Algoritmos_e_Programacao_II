#include <iostream>
#include <cmath>

using namespace std;

float calcular(int n)
{
	float aux = 0;

	for (int S = 2; S <= n; S++) 
	{
		aux = (float)(1 + pow(n, 2)) / (float)n;
		aux += S;
	}

	return aux;
}

int main()
{
	int n = 0;
	float answer = 0;

	cout << " Digite um numero N\n";
	do
	{
		cin >> n;
	} while (n <= 0);

	answer = calcular(n);
	cout << " O resultado eh: " << answer;

	return 0;
}