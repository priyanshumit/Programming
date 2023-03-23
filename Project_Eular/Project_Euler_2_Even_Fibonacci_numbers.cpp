#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double

using namespace std;

int main()
{
  ll sum = 0;
  ll x = 1;
  ll y = 2;
  while (x <= 4000000)
  {
    if (x % 2 == 0)
      sum += x;
    ll z = x + y;
    x = y;
    y = z;
  }
  cout << sum;
  return 0;
}