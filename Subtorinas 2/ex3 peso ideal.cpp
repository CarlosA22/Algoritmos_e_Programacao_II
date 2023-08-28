#include <iostream>
using namespace std;

int pesoIdeal()
{
	float altura = 0;
	float pIdeal = 0;
	char sexo;
	cout << "Diga seu sexo H/M\n";
	cin >> sexo;

	if (sexo == 'H' || sexo == 'h')
	{
		cout << "\n digite sua altura:\n";
		cin >> altura;
		pIdeal = 72.7 * altura - 58;
		cout << "\nSeu peso ideal é: " << pIdeal <<" kg";

	}else if(sexo == 'M' || sexo == 'm')
	{
		cout << "\n digite sua altura:\n";
		cin >> altura;
		pIdeal = 62.1  * altura - 44.7;
		cout << "\nSeu peso ideal é: " << pIdeal << " kg";
	}
	return pIdeal;
}

int main()
{
   
	pesoIdeal();

	return 0;
}
