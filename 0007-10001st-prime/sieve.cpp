// Richard Kirchofer

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number?

#include <iostream>
#define LEN 1000000
using namespace std;

int main()
{
  int nums[LEN];
  int count = 0;

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
      // cout << b  << "--" << a << endl;
    }

    // increment a to the next nonzero number nums[a]
    for (; a < LEN;)
    {
      a++;
      if (nums[a] != 0)
      {
        // cout << nums[a] << "--" << a << endl;
        break;
      }
    }
  }

  // print the nonzero values of nums and count how many there are
  for (int p = 0; p < LEN; p++)
  {
    if (nums[p] != 0) //cout << nums [p] << endl;
    count ++;
  }

  // make an array for the prime numbers
  int *prime = new int[count];

  // fill in the array of prime numbers
  for (int p = 0, r = 0; p < LEN; p++)
  {
    if (nums[p] != 0)
    {
      prime[r] = nums[p];
      r++;
    }
  }

  // // print the contents of prime[]
  // for (int e = 0; e < count; e++)
  // {
  //   cout << prime[e] << ", ";
  // }

  cout << endl;

  // print the contents of nums[]
  for (int f = 0; f < LEN; f++)
  {
    if (nums[f] != 0) cout << 1;
    else cout << " ";
    // cout << nums[f] << ", ";
  }

  cout << endl;
  cout << endl;

  cout << prime[10001] << endl;
}
