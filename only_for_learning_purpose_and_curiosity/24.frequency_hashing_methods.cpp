// 🔹 METHOD 1: Using unordered_map (Hash Map)
// ⏱️ Time Complexity: O(n + q) average, O(n*q) worst-case (rare)
// 💾 Space Complexity: O(unique elements)

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>arr;
    int n;cin>>n;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        arr.push_back(x);
    }
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++) hash[arr[i]]++;
    int q;cin>>q;
    while(q--){
        int k;cin>>k;
        cout<<hash[k]<<endl;
    }
}
// 🔹 METHOD 2: Using map (Red-Black Tree)
// ⏱️ Time Complexity: O(n log n + q log n)
// 💾 Space Complexity: O(unique elements)

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int>arr;
    int n;cin>>n;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        arr.push_back(x);
    }
    map<int,int>hash;
    for(int i=0;i<n;i++) hash[arr[i]]++;
    int q;cin>>q;
    while(q--){
        int k;cin>>k;
        cout<<hash[k]<<endl;
    }
}
// 🔹 METHOD 3: Using map with static array input
// ⏱️ Time Complexity: O(n log n + q log n)
// 💾 Space Complexity: O(unique elements)

#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int,int>hash;
    for(int i=0;i<n;i++) hash[arr[i]]++;
    int q;cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hash[x]<<endl;
    }
}
// 🔹 METHOD 4: Using dynamic array (heap memory)
// ⏱️ Time Complexity: O(n + q)
// 💾 Space Complexity: O(max(arr[i])) → requires large memory if range is big

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int* hash = new int[1000000](); // () initializes all to 0

    for (int i = 0; i < n; i++) hash[arr[i]]++;

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        cout << hash[x] << endl;
    }

    delete[] hash; // free memory
    return 0;
}
// 🔹 METHOD 5: Using static array (stack memory)
// ⏱️ Time Complexity: O(n + q)
// 💾 Space Complexity: O(max(arr[i])) → fixed-size, faster but limited range

#include <iostream>
using namespace std;

// int hashArr[100000000]; // global → stored in static memory (not stack)

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int hashArr[100000] = {0};

    for (int i = 0; i < n; i++)
    {
        hashArr[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << hashArr[x] << endl;
    }
    return 0;
}
