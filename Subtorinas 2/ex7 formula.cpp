#include <iostream>
using namespace std;

float funcaoE(float X)
{
	float E = 0;
	float soma = 0;
	do
	{
		for (float i = 1; i <= X; i++)
		{
			soma = (X / i); // 1/1 + 1/2 + 1/3 + 1/X;
			E += soma; //Xfinal = Xfinal + soma;
		}
		X++;
	} while (X <= 15);

	return E;
}

/*In your code, you want to calculate the sum of all the terms in 
the series. Therefore, you need to use the += operator to add each term 
to the variable XFinal, and keep track of the total sum. 
If you use the = operator, you will only assign each term to the 
variable XFinal, and lose the previous terms. This will result in an 
incorrect calculation of EE.*/

int main()
{
	float somatorio = 0;
	float funcE = 0;

	for (float X = 5; X <= 15; X++)
	{
		funcE = funcaoE(X);
		somatorio += funcE; //somatorio = somatorio + funcE;
	}
	cout << "O somatório dos valores de E para o intervalo [5,15] é: " << somatorio << endl;

	

	return 0;
}
