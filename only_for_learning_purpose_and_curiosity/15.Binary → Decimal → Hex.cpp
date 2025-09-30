// ===========================
// 1️⃣ Binary → Decimal → Hex (Vector)
// ===========================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;  // binary input as integer
    vector<int> bin;

    if(n == 0) { cout << 0; return 0; }

    // store binary digits in reverse
    while(n > 0) {
        bin.push_back(n % 10);
        n /= 10;
    }

    // convert binary to decimal
    int dec = 0, m = 1;
    for(auto it = bin.begin(); it != bin.end(); it++) {
        dec += (*it) * m;
        m *= 2;
    }

    // convert decimal to hex
    vector<int> hex;
    while(dec > 0) {
        hex.push_back(dec % 16);
        dec /= 16;
    }

    for(auto it = hex.rbegin(); it != hex.rend(); it++) {
        if(*it < 10) cout << *it;
        else cout << char('A' + *it - 10);
    }

    cout << endl;
}

// ===========================
// 2️⃣ Binary → Decimal → Hex (Array)
// ===========================
#include <iostream>
#include <array>
using namespace std;

int main() {
    int n; cin >> n;
    array<int, 32> bin;
    int i = 0;

    if(n == 0) { cout << 0; return 0; }

    while(n > 0) {
        bin[i++] = n % 10;
        n /= 10;
    }

    int dec = 0, m = 1;
    for(int j = 0; j < i; j++) {
        dec += bin[j] * m;
        m *= 2;
    }

    array<int, 32> hex;
    int k = 0;
    while(dec > 0) {
        hex[k++] = dec % 16;
        dec /= 16;
    }

    for(int j = k - 1; j >= 0; j--) {
        if(hex[j] < 10) cout << hex[j];
        else cout << char('A' + hex[j] - 10);
    }

    cout << endl;
}

// ===========================
// 3️⃣ Binary → Decimal → Hex (Recursion)
// ===========================
#include <iostream>
using namespace std;

int binaryToDecimal(int n, int m = 1){
    if(n == 0) return 0;
    return (n % 10) * m + binaryToDecimal(n / 10, m * 2);
}

void decimalToHex(int n){
    if(n == 0) return;
    decimalToHex(n / 16);
    int rem = n % 16;
    if(rem < 10) cout << rem;
    else cout << char('A' + rem - 10);
}

int main() {
    int n; cin >> n;
    int dec = binaryToDecimal(n);
    if(dec == 0) cout << 0;
    else decimalToHex(dec);
    cout << endl;
}

// ===========================
// 4️⃣ Binary → Decimal → Hex (String Method)
// ===========================
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;  // binary input as string
    int dec = 0, m = 1;

    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] == '1') dec += m;
        m *= 2;
    }

    if(dec == 0) { cout << 0; return 0; }

    string ans = "";
    while(dec > 0) {
        int r = dec % 16;
        if(r < 10) ans = char('0' + r) + ans;
        else ans = char('A' + r - 10) + ans;
        dec /= 16;
    }

    cout << ans << endl;
}

// ===========================
// 5️⃣ Binary → Decimal → Hex (Bitwise)
// ===========================
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;  // binary input as integer
    int dec = 0, pos = 0;

    while(n > 0) {
        int digit = n % 10;
        if(digit == 1) dec += (1 << pos);
        n /= 10;
        pos++;
    }

    if(dec == 0) { cout << 0; return 0; }

    string ans = "";
    while(dec > 0) {
        int r = dec & 15;  // last 4 bits
        if(r < 10) ans = char('0' + r) + ans;
        else ans = char('A' + r - 10) + ans;
        dec >>= 4;
    }

    cout << ans << endl;
}
