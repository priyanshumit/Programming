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
  ll sum = 0;
  ll n = 2000000;
  for (size_t i = 2; i < n; i++)
    if (isPrime(i))
      sum += i;
  cout << sum;
  return 0;
}