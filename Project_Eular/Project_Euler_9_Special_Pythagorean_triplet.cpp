#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double

using namespace std;

int main()
{
  for (size_t i = 1; i < 1000; i++)
    for (size_t j = 1; j < 1000; j++)
      if (i * i + j * j == (1000 - i - j) * (1000 - i - j))
      {
        cout << (i * j * (1000 - i - j));
        return 0;
      }
  return 0;
}