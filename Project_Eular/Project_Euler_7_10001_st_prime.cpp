#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double

using namespace std;

bool isPrime(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

int main()
{
  ll x = 1, n = 0;
  while (n != 10001)
  {
    x++;
    if (isPrime(x))
      n++;
  }
  cout << x;
  return 0;
}