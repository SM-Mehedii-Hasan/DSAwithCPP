#include<iostream>
using namespace std;

int incre(int& n){   // notice the "&" → pass by reference
    n++;             // increment n directly
    return n;        // return updated value
}

int main(){
    int n;
    cin >> n;              // suppose input = 5
    cout << n << endl;     // prints 5
    cout << incre(n) << endl; // n gets incremented (5 → 6), prints 6
    cout << n << endl;     // prints 6 (because n is modified by reference)
}
output:
5
6
6
___________________________________________________________________________________________________
  #include<iostream>
using namespace std;

int incre(int n){   // pass by value → copy of n is created
    n++;            // increment the copy
    return n;       // return incremented value
}

int main(){
    int n;
    cin >> n;             // suppose input = 5
    cout << n << endl;    // prints 5
    cout << incre(n) << endl; // function increments copy (5→6), prints 6
    cout << n << endl;    // prints 5 (original not changed)
}
output:
5
6
5
🔑 Difference from previous code:

With int incre(int& n) (reference) → original variable changes (5 6 6).

With int incre(int n) (value) → original variable stays same (5 6 5).

👉 In short:

Pass by reference → function can modify the caller’s variable.

Pass by value → function only works on a copy.
