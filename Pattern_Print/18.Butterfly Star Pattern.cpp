// // Butterfly Star Pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i <= m)
        {
            for (int j = 1; j <= i; j++)
                cout << "* ";
            for (int j = 1; j <= n - 2 * i; j++)
                cout << "  ";
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
                cout << "* ";
            for (int j = 1; j <= 2 * (i - 1) - n; j++)
                cout << "  ";
            for (int j = 1; j <= n - i + 1; j++)
                cout << "* ";
            cout << endl;
        }
    }
}


// *                     * 
// * *                 * * 
// * * *             * * * 
// * * * *         * * * * 
// * * * * *     * * * * * 
// * * * * * * * * * * * * 
// * * * * * * * * * * * * 
// * * * * *     * * * * * 
// * * * *         * * * * 
// * * *             * * * 
// * *                 * * 
// *                     * 
