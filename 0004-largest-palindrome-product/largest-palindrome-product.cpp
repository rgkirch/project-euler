// Richard Kirchofer

// Largest palindrome product
// Problem 4
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>

using namespace std;

int palTest(long);
int length(long);

int main()
{
	long num = 0;
	long largest = 0;

	for (int a = 999; a > 0; a--)
	{
		for (int b = 999; b > 0; b--)
		{
			num = a * b;
			if (palTest(num))
			{
				if (num > largest)
				{
					largest = num;
					// cout << "a[" << a << "] b[" << b << "]" << endl;
				}
			}
		}
	}
	cout << largest << endl;

	return 1;
}

int palTest(long in)
{
	long store = 0;
	int len = length(in);
	for (int i = 0; i < len / 2; i++)
	{
		store *= 10;
		store += in % 10;
		in /= 10;
	}
	// cout << in << endl;
	// cout << store << endl;
	if (len % 2)
	{
		in /= 10;
	}
	return store == in;
}

int length(long in)
{
	int length = 0;
	while (in > 0)
	{
		in /= 10;
		length++;
	}
	return length;
}
