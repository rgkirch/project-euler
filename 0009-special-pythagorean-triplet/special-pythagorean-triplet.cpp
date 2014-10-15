// Richard Kirchofer

// special-pythagorean-triplet.cpp

// Special Pythagorean triplet
// Problem 9
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>

using namespace std;

int main()
{
  // c <= max
  // b <= max - c
  // a <= max - c - b
  int max = 1000;
  for (int c = max; c > 0; c--)
  {
    for (int b = max - c; b > 0; b--)
    {
      int a = max - c - b;
      if (a * a + b * b == c * c) cout << a * b * c << endl;
    }
  }
  return 1;
}
