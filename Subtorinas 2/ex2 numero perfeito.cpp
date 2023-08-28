#include <iostream>

using namespace std;

int verificadorPerfeito(int numero)
{
	bool verificador{ true };
	int somas = 0;

	cin >> numero;

	//loop de 1 para a metade do numero
	for (int i = 1; i <= numero / 2; i++)
	{
		//se o i é um divisor do numero, adicione a somas
		if (numero % i == 0)
		{
			somas = somas + i;
		}
	}

	if (somas == numero) {
		verificador = true;
	}
	else {
		verificador = false;
	}

	return verificador;
}

int main()
{
	int numero = 0;
	bool verificador{ true };

	verificador = verificadorPerfeito(numero);
	cout << verificador;

	return 0;
}