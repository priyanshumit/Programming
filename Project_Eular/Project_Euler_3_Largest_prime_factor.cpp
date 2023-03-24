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
  ll n = 600851475143;
  for (size_t i = 3; i <= n; i += 2)
  {
    if (n % i == 0 && isPrime(n / i))
    {
      cout << n / i;
      break;
    }
  }
  return 0;
}