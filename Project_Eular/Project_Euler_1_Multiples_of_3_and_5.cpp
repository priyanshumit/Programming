#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double

using namespace std;

int main()
{
  ll n = 1000;
  ll sum = 0;
  for (size_t i = 0; i < n; i++)
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  cout << sum;
  return 0;
}