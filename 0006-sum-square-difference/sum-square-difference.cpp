// Richard Kirchofer

// sum-square-difference.cpp

// The sum of the squares of the first ten natural numbers is, 1^2 + 2^2 + ... + 10^2 = 385 The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10)2 = 552 = 3025 Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <limits>

using namespace std;

int main()
{
  typedef std::numeric_limits< double > dbl;
  cout.precision(dbl::digits10);

  double s = 0;
  double l = 0;
  for (int i = 1; i <= 100; i++)
  {
    s += i * i;
    l += i;
  }
  l = l * l;
  s = l - s;
  cout << s << fixed << endl;
}
