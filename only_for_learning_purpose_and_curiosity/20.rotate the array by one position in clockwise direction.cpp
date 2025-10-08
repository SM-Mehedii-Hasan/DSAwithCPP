// // ================= Method 1: Using reverse() function =================
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;

    // Rotate array clockwise by 1 using reverse method
    reverse(arr, arr + n);    // Reverse whole array
    reverse(arr, arr + k);    // Reverse first k elements
    reverse(arr + k, arr + n);// Reverse remaining elements

    cout << "Method 1 (reverse): ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}

// // ================= Method 2: Single shift manually =================
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    k %= n;

    // Rotate array clockwise by 1 manually (single shift)
    int temp = arr[n - 1];
    for (int i = n - 1; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    cout << "Method 2 (single shift): ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}

// // ================= Method 3: Loop-based shift =================
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    k %= n;

    // Rotate array clockwise by 1 using loop
    while (k--) {
        int temp = arr[n - 1];
        for (int i = n - 1; i >= 1; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }

    cout << "Method 3 (loop shift): ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}
