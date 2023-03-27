#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double

using namespace std;

int main()
{
  ll n = 100;
  ll sum_of_square = (n * (n + 1) * (2 * n + 1) / 6);
  ll square_of_sum = (n * (n + 1) / 2) * (n * (n + 1) / 2);
  cout << square_of_sum - sum_of_square;
  return 0;
}