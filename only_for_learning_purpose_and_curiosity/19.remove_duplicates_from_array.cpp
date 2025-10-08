| Method | Approach            | Order Preserved | Sorted Output | In-place | Time       |
| ------ | ------------------- | --------------- | ------------- | -------- | ---------- |
| 1      | Vector (sorted)     | ✅ Yes           | ✅ Yes         | ✅ Yes    | O(n)       |
| 2      | Raw array (sorted)  | ✅ Yes           | ✅ Yes         | ✅ Yes    | O(n)       |
| 3      | Temporary array     | ✅ Yes           | ✅ Yes         | ❌ No     | O(n)       |
| 4      | Vector + push_back  | ✅ Yes           | ✅ Yes         | ❌ No     | O(n)       |
| 5      | unordered_set       | ❌ No            | ❌ No          | ❌ No     | O(n)       |
| 6      | set (manual insert) | ❌ No            | ✅ Yes         | ❌ No     | O(n log n) |
| 7      | set (direct init)   | ❌ No            | ✅ Yes         | ❌ No     | O(n log n) |





// _______________________________________________________________
// 🧩 Method 1: In-place Duplicate Removal (Vector + Sorted Array)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 10, 20, 20, 30, 40, 40, 50};

    int j = 0; 
    for (int i = 1; i < arr.size(); i++) {
        if (arr[j] != arr[i]) {
            arr[++j] = arr[i]; 
        }
    }
    arr.resize(j + 1);
    for (int x : arr) cout << x << " ";
}



// _______________________________________________________________
// 🧩 Method 2: In-place Duplicate Removal (Raw Array)
#include<iostream>
using namespace std;
int main(){
     int arr[] = {10, 10, 20, 20, 30, 40, 40, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[j]!=arr[i]) arr[++j]=arr[i];
    }
    for(int i=0;i<=j;i++) cout<<arr[i]<<" ";
}


// _______________________________________________________________
// 🧩 Method 3: Using Temporary Array (No In-place)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 10, 20, 20, 30, 40, 40, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int new_arr[n];
    new_arr[0]=arr[0];
    int j=0;
    for(int i=1;i<n;i++){
        if(new_arr[j]!=arr[i]) new_arr[++j]=arr[i];
    }
    for(int i=0;i<=j;i++) cout<<new_arr[i]<<" ";
}


// _______________________________________________________________
// 🧩 Method 4: Using Vector + push_back (Sorted Vector)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 10, 20, 20, 30, 40, 40, 50};
    vector<int> new_arr;
    new_arr.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++) {
        if (new_arr.back() != arr[i]) {
            new_arr.push_back(arr[i]);
        }
    }

    for (auto x : new_arr) cout << x << " ";
}



// _______________________________________________________________
// 🧩 Method 5: Using unordered_set (Removes Duplicates — Unordered Output)
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr = {10, 20, 10, 30, 20, 40, 40, 50};
     unordered_set<int>st(arr.begin(),arr.end());
     vector<int>ans(st.begin(),st.end());
     for(auto x:ans) cout<<x<<" ";
}



// _______________________________________________________________
// 🧩 Method 6: Using set (Removes Duplicates — Sorted Output)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {10, 20, 10, 30, 20, 40, 40, 50};
    set<int>st;
    for(auto s:arr) st.insert(s);
    vector<int>ans;
    for(auto s:st) ans.push_back(s);
    for(auto x:ans) cout<<x<<" "; 
}




// _______________________________________________________________
// 🧩 Method 7: Using set (Compact Form)
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {10, 20, 10, 30, 20, 40, 40, 50};
    set<int> st(arr.begin(), arr.end());
    vector<int> ans(st.begin(), st.end());
    for (auto x : ans) cout << x << " ";
}
