// ===========================
// 1️⃣ Using vector
// ===========================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if(n == 0) { cout << 0; return 0; }

    vector<int> vec;
    while(n > 0) {
        vec.push_back(n % 2);
        n = n / 2;
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
    while(n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j = i-1; j >= 0; j--) cout << arr[j];
    cout << endl;
}

// ===========================
// 3️⃣ Using recursion
// ===========================
#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if(n == 0) return;
    decimalToBinary(n / 2);
    cout << n % 2;
}

int main() {
    int n; cin >> n;
    if(n == 0) cout << 0;
    else decimalToBinary(n);
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
    while(n > 0) {
        ans = ans + (n % 2) * m;
        n = n / 2;
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
    while(n > 0) {
        ans = char(n % 2 + '0') + ans;
        n = n / 2;
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
    while(n > 0) {
        int bit = n & 1;
        ans = char(bit + '0') + ans;
        n = n >> 1;
    }
    cout << ans << endl;
}
