
// Zig-zag number filling mehtod 2
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int arr[n];
   int x = 1;
   for (int i = 1; i <= n; i++)
   {

      if (i % 2 != 0)
      {
         for (int j = 1; j <= n; j++)
         {
            cout << x << " ";
            x++;
         }
         cout << endl;
      }
      else
      {
         for (int j = 1; j <= n; j++)
         {
            arr[j] = x;
            x++;
         }
         for (int j = n; j >= 1; j--)
            cout << arr[j] << " ";

         cout << endl;
      }
   }
}

// 1 2 3 4
// 8 7 6 5
// 9 10 11 12
// 16 15 14 13
