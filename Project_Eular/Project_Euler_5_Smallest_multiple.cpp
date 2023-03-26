#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double

using namespace std;

int main()
{
  ll lcm = 1;
  for (ll i = 1; i <= 20; i++)
    lcm = ((i * lcm) / __gcd(i, lcm));
  cout << lcm;
  return 0;
}
