// Using a custom power function
// #include <bits/stdc++.h>
// using namespace std;

// int digit_count(int n) {
//     int count = 0;
//     while (n) {
//         count++;
//         n /= 10;
//     }
//     return count;
// }

// int intPow(int base, int exp) {
//     int result = 1;
//     while (exp--) {
//         result *= base;
//     }
//     return result;
// }

// bool isArmstrong(int n, int count) {
//     int ans = 0;
//     int originalNo = n;
//     while (n) {
//         int r = n % 10;
//         ans += intPow(r, count); // use integer power
//         n /= 10;
//     }
//     return ans == originalNo;
// }

// int main() {
//     int n;
//     cin >> n;
//     int dcount = digit_count(n);
//     if (isArmstrong(n, dcount))
//         cout << "The number is an Armstrong number\n";
//     else
//         cout << "The number is not an Armstrong number\n";
// }

// ___________________________________________________________________________

// Direct multiplication inside loop
// #include <bits/stdc++.h>
// using namespace std;

// int digit_count(int n) {
//     int count = 0;
//     while (n) {
//         count++;
//         n /= 10;
//     }
//     return count;
// }

// bool isArmstrong(int n, int count) {
//     int ans = 0;
//     int originalNo = n;
//     while (n) {
//         int r = n % 10;

//         // calculate r^count manually
//         int mult = 1;
//         for (int i = 0; i < count; i++) {
//             mult *= r;
//         }

//         ans += mult;
//         n /= 10;
//     }
//     return ans == originalNo;
// }

// int main() {
//     int n;
//     cin >> n;
//     int dcount = digit_count(n);
//     if (isArmstrong(n, dcount))
//         cout << "The number is an Armstrong number\n";
//     else
//         cout << "The number is not an Armstrong number\n";
// }
