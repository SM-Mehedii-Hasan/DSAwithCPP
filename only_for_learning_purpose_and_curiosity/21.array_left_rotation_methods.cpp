// ================= Method 1: Using reverse() function =================
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Rotate array left by 1 using reverse method
    reverse(arr, arr + n);       // Reverse whole array
    reverse(arr, arr + n - 1);   // Reverse first n-1 elements

    cout << "Method 1 (reverse): ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}

// ================= Method 2: Single shift manually =================
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Rotate array left by 1 manually
    int temp = arr[0];            // store first element
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];      // shift elements left
    }
    arr[n - 1] = temp;            // put first element at end

    cout << "Method 2 (single shift): ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}

// ================= Method 3: Loop-based shift =================
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;       // number of left rotations
    k %= n;

    // Rotate array left by k using loop
    while (k--) {
        int temp = arr[0];        // store first element
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];  // shift left
        }
        arr[n - 1] = temp;        // put first element at end
    }

    cout << "Method 3 (loop shift): ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}
