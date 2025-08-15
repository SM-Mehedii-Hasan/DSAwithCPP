
// Zig-zag number filling
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++)
   {

      int start = (i - 1) * n + 1;
      int end = i * n;
      if (i % 2 != 0)
      {
         for (int j = start; j <= end; j++)
            cout << j << " ";
         cout << endl;
      }
      else
      {
         for (int j = end; j >= start; j--)
            cout << j << " ";
         cout << endl;
      }
   }
}

// 1 2 3 4 
// 8 7 6 5 
// 9 10 11 12 
// 16 15 14 13 
