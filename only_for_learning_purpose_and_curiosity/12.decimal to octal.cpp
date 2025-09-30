// ===========================
// 1️⃣ Using vector
// ===========================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if(n == 0) { cout << 0; return 0; }

    vector<int> vec;
    while(n > 0){
        vec.push_back(n % 8);
        n = n / 8;
    }

    for(auto it = vec.rbegin(); it != vec.rend(); it++)
        cout << *it;

    cout << endl;
}

// ===========================
// 2️⃣ Using array
// ===========================
#include <iostream>
#include <array>
using namespace std;

int main() {
    int n; cin >> n;
    if(n == 0) { cout << 0; return 0; }

    array<int, 32> arr;
    int i = 0;
    while(n > 0){
        arr[i] = n % 8;
        n = n / 8;
        i++;
    }

    for(int j = i-1; j >= 0; j--)
        cout << arr[j];

    cout << endl;
}

// ===========================
// 3️⃣ Using recursion
// ===========================
#include <iostream>
using namespace std;

void decimalToOctal(int n){
    if(n == 0) return;
    decimalToOctal(n / 8);
    cout << n % 8;
}

int main() {
    int n; cin >> n;
    if(n == 0) cout << 0;
    else decimalToOctal(n);
    cout << endl;
}

// ===========================
// 4️⃣ Using arithmetic integer output
// ===========================
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if(n == 0) { cout << 0; return 0; }

    int ans = 0, m = 1;
    while(n > 0){
        ans = ans + (n % 8) * m;
        n = n / 8;
        m = m * 10;
    }
    cout << ans << endl;
}

// ===========================
// 5️⃣ Using string and concatenation
// ===========================
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if(n == 0) { cout << 0; return 0; }

    string ans = "";
    while(n > 0){
        ans = char(n % 8 + '0') + ans;
        n = n / 8;
    }
    cout << ans << endl;
}

// ===========================
// 6️⃣ Using bitwise operations
// ===========================
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if(n == 0) { cout << 0; return 0; }

    string ans = "";
    while(n > 0){
        int digit = n & 7; // last 3 bits for octal
        ans = char(digit + '0') + ans;
        n = n >> 3; // shift 3 bits
    }
    cout << ans << endl;
}
