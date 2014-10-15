// Richard Kirchofer
// project euler problem number 5

// smallest-multiple.cpp

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder. What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>
#include <iomanip>
#include <limits>


using namespace std;

int main()
{
  // typedef std::numeric_limits< double > dbl;

  // cout.precision(dbl::digits10);

  int num = 20;
  int keep_going = 1;
  int to = 20;
  while (keep_going)
  {
    num += 1;
    for (int n = 2; n < 21; n++)
      if (n % num != 0)
        break;
      else if (n == to)
      {
        cout << setprecision(20) << num << endl;
        keep_going = 0;
      }
  }

  // double num = 1;
  // for (;; num++)
  // {
  //   for (int i = 2; i <= 20; i++)
  //   {
  //     if ((int) num % i != 0) break;
  //     // new line here
  //     if (i == 20) {
  //       cout << setprecision(20) << num << endl;
  //       return 1;
  //     }
  //     // if (i == 20) //cout << num << endl;
  //     // cout << num << fixed << endl;
  //   }
  // }
  // return 1;
}
