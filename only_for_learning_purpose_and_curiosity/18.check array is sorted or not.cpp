// _____________________________________________________________
// Process 1: Using STL is_sorted()
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {25,16,38,10,35,48,20,50,50};

    if (is_sorted(arr.begin(), arr.end()))
        cout << "Array is sorted in ascending order\n";
    else if (is_sorted(arr.rbegin(), arr.rend()))
        cout << "Array is sorted in descending order\n";
    else
        cout << "Array is not sorted\n";
}

// ___________________________________________________________
// Process 2: Manual Descending Check
#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]) return false;  // checks descending
    }
    return true;
}
int main(){
    vector<int>arr={25,16,38,10,35,48,20,50,50};
    int n=arr.size();
    if(isSorted(arr,n)) cout<<"The array is sorted (descending)\n";
    else cout<<"The array is not sorted\n"; 
}

// ___________________________________________________________________________
// Process 3: Manual Ascending Check
#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;  // checks ascending
    }
    return true;
}
int main(){
    vector<int>arr={25,16,38,10,35,48,20,50,50};
    int n=arr.size();
    if(isSorted(arr,n)) cout<<"The array is sorted (ascending)\n";
    else cout<<"The array is not sorted\n"; 
}
