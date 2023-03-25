#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double

using namespace std;

int checkPalindrome(string str)
{
  int len = str.length();
  for (int i = 0; i < len / 2; i++)
    if (str[i] != str[len - i - 1])
      return false;

  return true;
}

int main()
{
  ll maxPalin = -1;
  for (int i = 100; i < 1000; i++)
  {
    for (int j = 100; j < 1000; j++)
    {
      ll prod = i * j;
      string s = to_string(prod);
      if (checkPalindrome(s) && prod > maxPalin)
        maxPalin = prod;
    }
  }
  cout << maxPalin;
  return 0;
}