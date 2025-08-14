// Inverted Pyramid Star Pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int col = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
            cout << "  ";
        for (int j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        col -= 2;
        cout << endl;
    }
}
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
