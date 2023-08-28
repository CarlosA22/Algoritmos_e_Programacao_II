#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void criaMatriz(int mat1[3][3], int mat2[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat1[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat2[i][j] = rand() % 10;
		}
	}
}

void somaMatriz(int mat1[3][3], int mat2[3][3], int mat3[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
}

void subtraiMatriz(int mat1[3][3], int mat2[3][3], int mat3[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat3[i][j] = mat1[i][j] - mat2[i][j];
		}
	}
}

void multiplicaMatriz(int mat1[3][3], int mat2[3][3], int mat3[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int soma = 0;
			for (int k = 0; k < 3; k++)
			{
				soma += mat1[i][j] * mat2[i][j]; 
			}
			mat3[i][j] = soma;
		}
	}
}


void mostrarMatriz(int mat[3][3]) 
{
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3];

	srand(time(NULL));

	criaMatriz(mat1, mat2);
	cout << "Matriz 1 normal\n";
	mostrarMatriz(mat1);
	cout << endl;
	cout << "Matriz 2 normal\n";
	mostrarMatriz(mat2);
	cout << endl;
	cout << "Soma da matriz 1 com a 2\n";
	somaMatriz(mat1, mat2, mat3);
	mostrarMatriz(mat3);
	cout << endl;
	cout << "Subtracao da matriz 1 com a 2\n";
	subtraiMatriz(mat1, mat2, mat3);
	mostrarMatriz(mat3);
	cout << endl;
	cout << "Multiplicacao da matriz 1 com a 2\n";
	multiplicaMatriz(mat1, mat2, mat3);
	mostrarMatriz(mat3);

	return 0;
}