#include <iostream>
#include <random>

using namespace std;

void criaMatriz(int mat[6][6])
{

	// Create a random device to generate a seed
	random_device rd;

	// Create a random number engine with the seed from the random device
	default_random_engine engine(rd());

	// Create a uniform distribution in the range [1, 100]
	uniform_int_distribution<int> dist(1, 100);

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			mat[i][j] = dist(engine);
		}
	}

}

void mostrarMatriz( int mat[6][6])
{
	cout << "Matriz" << ": " << endl;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}
}

void multiplicarMatriz(int mat[6][6])
{
	for (int i = 0; i < 6; i++)
	{
		int aux = mat[i][i];
		for (int j = 0; j < 6; j++)
		{
			mat[i][j] *= aux;
		}
	}
}

int main()
{
	int mat[6][6];

	criaMatriz(mat);
	mostrarMatriz(mat);
	multiplicarMatriz(mat);
	mostrarMatriz(mat);

	cout << endl;

	return 0;
}