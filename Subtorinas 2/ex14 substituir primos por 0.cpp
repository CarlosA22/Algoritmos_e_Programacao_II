#include <iostream>
#include <random>
#include <cmath>

using namespace std;

// A function that returns true if n is prime, and false otherwise
bool is_prime(int n) {
	// If n is less than 2, it is not prime
	if (n < 2) {
		return false;
	}

	// If n is 2 or 3, it is prime
	if (n == 2 || n == 3) {
		return true;
	}

	// If n is even or divisible by 3, it is not prime
	if (n % 2 == 0 || n % 3 == 0) {
		return false;
	}

	// Check the divisibility by all numbers of the form 6k +/- 1, up to sqrt(n)
	int limit = sqrt(n);
	for (int k = 5; k <= limit; k += 6) {
		if (n % k == 0 || n % (k + 2) == 0) {
			return false;
		}
	}

	// If none of the above cases hold, then n is prime
	return true;
}

void primosPorZero(int vetorA[])
{
	int soma = 0;

	for (int i = 0; i < 5; i++)
	{

		if (is_prime(vetorA[i]) == true)
		{
			vetorA[i] = 0;
			i++;
		}
	}

}

int main()
{
	int vetorA[25];

	// Create a random device to generate a seed
	random_device rd;

	// Create a random number engine with the seed from the random device
	default_random_engine engine(rd());

	// Create a uniform distribution in the range [1, 100]
	uniform_int_distribution<int> dist(1, 100);

	// Fill the array with random numbers from the distribution
	for (int i = 0; i < 25; i++) {
		vetorA[i] = dist(engine);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << vetorA[i]<<"\t";
	}

	primosPorZero(vetorA);

	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << vetorA[i] << "\t";
	}

	return 0;
}