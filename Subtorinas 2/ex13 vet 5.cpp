#include <iostream>

using namespace std;

int mediaVetores(int vet1[], int vet2[])
{
	float media1 = 0, media2 = 0, soma1 = 0, soma2 = 0;
	bool mesmaMedia;

	for (int i = 0; i < 5; i++)
	{
		soma1 += vet1[i];
	}

	for (int i = 0; i < 5; i++)
	{
		soma2 += vet2[i];
	}

	media1 = (float)soma1 / 5;
	media2 = (float)soma2 / 5;

	if (media1 == media2)
	{
		mesmaMedia = true;
	}
	else
	{
		mesmaMedia = false;
	}



	return mesmaMedia;
}

int main()
{
	int vet1[5], vet2[5];
	int ehVerdade = 0;


	cout << "Insira 5 algarismos\n";
	for (int i = 0; i < 5; i++) 
	{
		cin >> vet1[i];
	}

	cout << "Insira mais 5 algarismos\n";
	for (int i = 0; i < 5; i++) 
	{
		cin >> vet2[i];
	}



	cout << "The array elements are: ";
	for (int i = 0; i < 5; i++) {
		cout << vet1[i] << " ";
	}
	cout << endl;

	cout << "The array elements are: ";
	for (int i = 0; i < 5; i++) {
		cout << vet2[i] << " ";
	}
	cout << endl;
	
	ehVerdade = mediaVetores(vet1, vet2);

	cout << ehVerdade;


	return 0;
}