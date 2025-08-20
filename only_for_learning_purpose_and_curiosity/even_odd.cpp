#include <iostream>
#include <cmath>
const double PI = 3.14159265358979323846;
using namespace std;

string evenOdd(int n) {
    if (n == 1) return "odd";
    if (n == 0) return "even";
    return evenOdd(n - 2);
}

int main() {
    int n;
    cin >> n;
    //_______________method 10:using  bitwise not (~)______________________
     if(n&(~1)==n) cout<<"even"<<endl;
     else cout<<"odd"<<endl; 
    //________method 9:using switch____________________
    switch (n%2)
    {
      case 0:cout<<"even"<<endl;
      case 1: cout<<"odd"<<endl;
    }

    //__________________method 8: using xor _________________________
    if ((n ^ 1) == n - 1) cout << "odd" << endl;
    else cout << "even" << endl;

    if ((n ^ 1) == n + 1) cout << "even" << endl;
    else cout << "odd" << endl;

    //_______________method 7: using cosine(cos)_____________________
    if (fabs(sin(n * PI / 2)) < 1e-9)
        cout << "even" << endl;
    else
        cout << "odd" << endl;

    if (fabs(cos(n * PI / 2)) < 1e-9)
        cout << "odd" << endl;
    else
        cout << "even" << endl;

    //________________method 6: bit shifting _________________________________
    if (((n >> 1) << 1) == n) cout << "even" << endl;
    else cout << "odd" << endl;

    //____________________method 5: check last digit_____________________
    int last_digit = n % 10;
    if (last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8)
        cout << "even" << endl;
    else
        cout << "odd" << endl;

    //_____________method 4: using recursion_____________
    cout << evenOdd(n) << endl;

    // _____________method 3: using division(/)_____________
    if ((n / 2) * 2 == n) cout << "even" << endl;
    else cout << "odd" << endl;

    //________________method 2: using bitwise AND(&)_____________________
    if ((n & 1) == 1) cout << "odd" << endl;
    else cout << "even" << endl;

    //____________________method 1: using modulus(%)_________________________________
    if (n % 2 == 0) cout << "even" << endl;
    else cout << "odd" << endl;

    return 0;
}
