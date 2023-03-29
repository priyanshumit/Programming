#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double

using namespace std;

int main()
{
  ll ans = 0;
  string s;
  cin >> s;
  for (size_t i = 0; i < 1000; i++)
  {
    ll pro = 1;
    for (size_t j = 0; j < 13; j++)
    {
      pro *= (s[i + j] - '0');
    }
    ans = max(ans, pro);
  }
  cout << ans;
  return 0;
}