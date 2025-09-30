// ===========================
// 1️⃣ Using Vector
// ===========================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> vec;

    if(n == 0) { cout << 0; return 0; }

    while(n > 0) {
        vec.push_back(n % 10); // store each binary digit
        n /= 10;
    }

    int ans = 0, m = 1;
    for(auto it = vec.begin(); it != vec.end(); it++) {
        ans += (*it) * m;   // multiply by corresponding power of 2
        m *= 2;
    }

    cout << ans << endl;
}

// ===========================
// 2️⃣ Using Array
// ===========================
#include <iostream>
#include <array>
using namespace std;

int main() {
    int n; cin >> n;
    array<int, 32> arr;
    int i = 0;

    if(n == 0) { cout << 0; return 0; }

    while(n > 0) {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }

    int ans = 0, m = 1;
    for(int j = 0; j < i; j++) {
        ans += arr[j] * m;
        m *= 2;
    }

    cout << ans << endl;
}

// ===========================
// 3️⃣ Using Recursion
// ===========================
#include <iostream>
using namespace std;

int binaryToDecimalRecursive(int n, int m = 1) {
    if(n == 0) return 0;
    int lastDigit = n % 10;
    return lastDigit * m + binaryToDecimalRecursive(n / 10, m * 2);
}

int main() {
    int n; cin >> n;
    cout << binaryToDecimalRecursive(n) << endl;
}

// ===========================
// 4️⃣ Using Integer Accumulator (Simple While Loop)
// ===========================
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0, m = 1;

    while(n > 0) {
        int r = n % 10;
        ans += r * m;
        m *= 2;
        n /= 10;
    }

    cout << ans << endl;
}

// ===========================
// 5️⃣ Using String
// ===========================
#include <iostream>
using namespace std;

int main() {
    string s; cin >> s; // read binary as string
    int ans = 0, m = 1;

    for(int i = s.length() - 1; i >= 0; i--) {
        if(s[i] == '1') ans += m;
        m *= 2;
    }

    cout << ans << endl;
}

// ===========================
// 6️⃣ Using Bitwise Operations
// ===========================
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0, pos = 0;

    while(n > 0) {
        int digit = n % 10;
        if(digit == 1) ans += (1 << pos); // 2^pos using shift
        n /= 10;
        pos++;
    }

    cout << ans << endl;
}
