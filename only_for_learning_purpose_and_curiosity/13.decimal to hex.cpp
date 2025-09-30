// ===========================
// 1️⃣ Using Vector
// ===========================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> vec;

    if(n == 0) { cout << 0; return 0; }

    while(n > 0){
        vec.push_back(n % 16);
        n = n / 16;
    }

    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        if(*it < 10) cout << *it;
        else cout << char('A' + *it - 10);
    }

    cout << endl;
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

    while(n > 0){
        arr[i] = n % 16;
        n = n / 16;
        i++;
    }

    for(int j = i-1; j >= 0; j--){
        if(arr[j] < 10) cout << arr[j];
        else cout << char('A' + arr[j] - 10);
    }

    cout << endl;
}

// ===========================
// 3️⃣ Using Recursion
// ===========================
#include <iostream>
using namespace std;

void decimalToHex(int n){
    if(n == 0) return;

    decimalToHex(n / 16);

    int remainder = n % 16;
    if(remainder < 10) cout << remainder;
    else cout << char('A' + remainder - 10);
}

int main(){
    int n; cin >> n;
    if(n == 0) cout << 0;
    else decimalToHex(n);
    cout << endl;
}

// ===========================
// 4️⃣ Using String (Prepend Method)
// ===========================
#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    if(n == 0) { cout << 0; return 0; }

    string ans = "";
    while(n > 0){
        int r = n % 16;
        if(r < 10) ans = char('0' + r) + ans;
        else ans = char('A' + r - 10) + ans;
        n = n / 16;
    }

    cout << ans << endl;
}

// ===========================
// 5️⃣ Using Bitwise Operations
// ===========================
#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    if(n == 0) { cout << 0; return 0; }

    string ans = "";
    while(n > 0){
        int bit = n & 15; // last 4 bits → hex digit
        if(bit < 10) ans = char(bit + '0') + ans;
        else ans = char(bit - 10 + 'A') + ans;
        n = n >> 4; // shift 4 bits
    }

    cout << ans << endl;
}
