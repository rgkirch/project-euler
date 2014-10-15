// Richard Kirchofer

// Largest prime factor
// Problem 3
// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?

#include <iostream>

using namespace std;

int main()
{
	long number = 600851475143;
	long largest = 1;
	long divi = 1;
	while(divi < number)
	{
		if (number % divi == 0)
		{
			number /= divi;
			divi = 1;
		}
		divi++;
		cout << "divi=\t" << divi-1 << "\t\t\t number=\t" << number << endl;
	}
	return 1;
}
