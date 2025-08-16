#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= n - i + 1; j++)
      cout << j << " ";
    for (int j = 1; j <= 2 * i - 1; j++)
      cout << "* ";
    // for(int j=n+1;j<=2*n-i+1;j++) cout<<2*n-j-i+2<<" ";
    // for(int j=1;j<=n-i+1;j++) cout<<n-j-i+2<<" ";
    for (int j = n - i + 1; j >= 1; j--)
      cout << j << " ";

    cout << endl;
  }
}

// 1 2 3 4 5 * 5 4 3 2 1
// 1 2 3 4 * * * 4 3 2 1
// 1 2 3 * * * * * 3 2 1
// 1 2 * * * * * * * 2 1
// 1 * * * * * * * * * 1
