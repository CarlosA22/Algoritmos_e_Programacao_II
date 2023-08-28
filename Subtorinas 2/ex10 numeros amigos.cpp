#include <iostream>

using namespace std;

int numerosAmigos(int n)
{
	int soma = 0;

	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			soma += i;
			if (i != n / i) // verifica se i é diferente de n / i
			{
				soma += n / i;
			}
		}
	}

	return soma - n;
}


bool saoAmigos(int a, int b)
{
	return numerosAmigos(a) == b && numerosAmigos(b) == a;
}

int main()
{
	int num1 = 0, num2 = 0;
	int n = 0;
	cout << "\nDigite dois numeros inteiros.\n";
	cin >> num1 >> num2;

	bool resultado = saoAmigos(num1, num2);
	cout << num1 << " e " << num2 << (resultado ? " sao amigos " : " nao sao amigos ") << endl;

	return 0;
}