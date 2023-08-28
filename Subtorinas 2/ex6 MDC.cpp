#include <iostream>
using namespace std;

int MaximoDivisorComum(int val1, int val2)
{
	while (val2 != 0)
	{
		int temp = val2;
		val2 = val1 % val2;
		val1 = temp;
	}
	return val1;
}

int main()
{
	int val1 = 0, val2 = 0;

	cout << "Digite dois valores para calcular o MDC\n";
	cin >> val1 >> val2;
	int mdc = MaximoDivisorComum(val1, val2);
	cout << "O MDC é: " << mdc << endl;

	return 0;
}

