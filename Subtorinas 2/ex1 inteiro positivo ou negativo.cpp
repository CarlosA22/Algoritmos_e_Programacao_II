#include <iostream>
using namespace std;

int verificadorDeNumeros(int numero)
{
	bool verificador{ true };

	cin >> numero;
	if (numero >= 0)
	{
		verificador = true;
	}
	else
	{
		verificador = false;
	}

	return verificador;
}

int main()
{
	int numero = 0;
	bool verificador{ true };

	verificador = verificadorDeNumeros(numero);

	cout << verificador;

	return 0;
}