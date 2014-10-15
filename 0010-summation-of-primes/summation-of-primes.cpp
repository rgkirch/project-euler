// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

#include <iostream>
#include <iomanip>
#define LEN 2000000


using namespace std;

int main()
{
  double sum = 0;
  // frome sieve.cpp from 10001st prime

  int nums[LEN];

  // fill nums with values; nums[0] = 0;
  for (int i = 0; i < LEN; i++)
  {
    nums[i] = i;
  }

  // starting with 2, find the second multiple of 2 and every multiple of 2 thereafter and make it a 0
  for (int a = 2; a < LEN;)
  {
    for (int b = 2; (b * a) < LEN; b++)
    {
      nums[b * a] = 0;
    }

    // increment a to the next nonzero number nums[a]
    for (; a < LEN;)
    {
      a++;
      if (nums[a] != 0) break;
    }
  }

  // for (int el = 0; el < LEN; el++)
  // {
  //   cout << nums[el] << endl;
  // }
  // cout << endl;

  // sum the contents of prime[]
  for (int e = 0; e < LEN; e++)
  {
    sum += nums[e];
  }

  cout << setprecision(20) << sum - 1 << endl;

  // end from sieve
}
