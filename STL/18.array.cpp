// #include<iostream>
// #include<array>
// using namespace std;
// array<int,10>garr;
// int main(){
//   //array[10];
//   array<int,10>arr;
//   arr={0};
//   for(auto x:arr) cout<<x<<" ";//arr={0 0 0 0 0 0 0 0 0 0}
//   cout<<endl;
//   arr={1}; 
//   for(auto x:arr) cout<<x<<" ";//1 0 0 0 0 0 0 0 0 0 
//   cout<<endl;
//   arr.fill(5);
//     for(auto x:arr) cout<<x<<" ";//5 5 5 5 5 5 5 5 5 5 
//   cout<<endl;
//   for(int i=0;i<arr.size();i++) cout<<arr.at(i)<<" ";//5 5 5 5 5 5 5 5 5 5 
//   cout<<endl;
//   for(auto it=arr.begin();it!=arr.end();it++)
//     cout<<*it<<" ";//5 5 5 5 5 5 5 5 5 5 
//     cout<<endl;
//     arr={1,2,3,4,5,6,7,8,9,0};
//     for(auto it=arr.rbegin();it!=arr.rend();it++)
//     cout<<*it<<" ";//10 9 8 7 6 5 4 3 2 1 
//     cout<<endl;
//     for(auto it=garr.begin();it!=garr.end();it++) cout<<*it<<" ";//0 0 0 0 0 0 0 0 0 0 
//     cout<<endl;
//     array<int,10>a={1,3,4};
//     for(auto x:a) cout<<x<<" ";
//     cout<<endl;
//     string s="mehedi";
//     for(auto& c:s) cout<<c<<" ";cout<<endl;
//     cout<<"\n\n";
//     array<int,5>aa={10,20,30,40,50};
//     cout<<aa.front()<<" "<<aa.back()<<" "<<aa.at(2);

  

// }
#include <bits/stdc++.h>
using namespace std;

// 1. Global array (goes in data segment, not stack)
int globalArr[100000000]; // ~100 million ints (~400 MB)

// -------------------------------------------------------
int main() {
    // 2. Local array in main (on stack) — stack is small!
    // Usually safe up to ~1e6 ints (~4 MB)
    int localArr[1000000];

    // 3. Local bool array in main (on stack, but smaller type)
    // bool is 1 byte, so we can fit more
    bool localBoolArr[10000000]; // 10 million bools (~10 MB)

    // 4. Dynamic array (on heap) — can be very large
    size_t N = 1000000000; // 1e9 ints (~4 GB, needs 64-bit + enough RAM)
    int *dynamicArr = nullptr;
    try {
        dynamicArr = new int[N];
        cout << "Dynamic array of size " << N << " allocated successfully.\n";
    } catch (bad_alloc &e) {
        cerr << "Heap allocation failed: " << e.what() << "\n";
    }

    cout << "Global array size   : " << sizeof(globalArr)/sizeof(globalArr[0]) << "\n";
    cout << "Local array size    : " << sizeof(localArr)/sizeof(localArr[0]) << "\n";
    cout << "Local bool array    : " << sizeof(localBoolArr)/sizeof(localBoolArr[0]) << "\n";

    delete[] dynamicArr; // free heap
    return 0;
//📌 Notes:
// Global array
// Here 1e8 ints = 400 MB, safe for 64-bit systems with ≥4 GB RAM.
// You can increase if your RAM allows.
// Local array (stack)
// Limited to ~1e6 ints (≈4 MB).
// If you try 1e7 → stack overflow.
// Local bool array
// Since bool = 1 byte, you can safely allocate ~10 MB or more.
// Don’t go too high (stack still limited).
// Dynamic array (heap)
// Here 1e9 ints = 4 GB. Works only on 64-bit systems with enough RAM.
// On 32-bit, you’ll hit the 2–3 GB process limit.
}
