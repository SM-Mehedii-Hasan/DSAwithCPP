// Alphabet Palindrome Pyramid
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int x = 64;
  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= n - i; j++)
      cout << " ";

    for (int j = 1; j <= i; j++)
    {
      cout << char(x + j);
    }
    for (int j = 1; j <= i - 1; j++)
    {
      cout << char(x + i - j);
    }

    cout << endl;
  }
}
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
