// flipped pyramid
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n / 2 + 1;

    for (int i = 1; i <= n; i++)
    {
        if (i <= mid)
        {
            for (int j = 1; j <= mid - i; j++)
                cout << "  ";
            for (int j = 1; j <= i; j++)
                cout << "* ";
        }
        else
        {
            for (int j = 1; j <= i - mid; j++)
                cout << "  ";

            for (int j = 1; j <= n - i + 1; j++)
                cout << "* ";
        }
        cout << endl;
    }
}

//         *
//       * *
//     * * *
//   * * * *
// * * * * *
//   * * * *
//     * * *
//       * *
//         *
