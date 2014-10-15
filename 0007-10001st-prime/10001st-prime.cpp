// Richard Kirchofer

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number?

#include <iostream>
#include <vector>
// #include <time.h>

using namespace std;

int main()
{
  // thiq = the number in question
  // time_t start, end;
  // time(&start);
  int plen = 1;
  vector<int> primes;
  primes.push_back(2);
  for(int tniq = 3; plen <= 20000; tniq += 2)
  {
    int b = 0;
    for(int i = 0; i < plen; i++)
    {
      if(tniq % primes[i] == 0) break;
      else b++;
    }
    if (b == plen)
    {
      primes.push_back(tniq);
      plen++;
      // cout << tniq << endl;
    }
  }
  // time(&end);
  // double dif = difftime (end,start);
  // cout << dif << endl;
  cout << primes[10001-1] << endl;
}
