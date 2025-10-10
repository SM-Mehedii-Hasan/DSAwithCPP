// ================= Method 1: Two-pointer with set =================
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main_Method1() {
    vector<int> arr1 = {1, 2, 3, 4, 6, 5, 4, 4};
    vector<int> arr2 = {2, 3, 5, 5, 4, 4, 2};
    int n1 = arr1.size(), n2 = arr2.size();
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0, j = 0;
    set<int> ans;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else {
            ans.insert(arr1[i]);
            i++; j++;
        }
    }
    for(auto x : ans) cout << x << " ";
    cout << endl;
    return 0;
}

// ================= Method 2: Visited array + set =================
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main_Method2() {
    vector<int> arr1 = {1,2,3,4,6,5,4,4};
    vector<int> arr2 = {2,3,5,5,4,4,2};
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    vector<int> visited(arr2.size(),0);
    set<int> ans;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j] && visited[j]==0){
                ans.insert(arr1[i]);
                visited[j]=1;
                break;
            }
        }
    }
    for(auto x:ans) cout<<x<<" ";
    cout << endl;
    return 0;
}

// ================= Method 3: Two-pointer + vector =================
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main_Method3() {
    vector<int> arr1 = {1,2,3,4,6,5,4,4};
    vector<int> arr2 = {2,3,5,5,4,4,2};
    int n1 = arr1.size(), n2 = arr2.size();
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0, j = 0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else {
            ans.push_back(arr1[i]);
            i++; j++;
        }
    }
    for(auto x:ans) cout<<x<<" ";
    cout << endl;
    return 0;
}

// ================= Method 4: Visited array + vector =================
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main_Method4() {
    vector<int> arr1 = {1,2,3,4,6,5,4,4};
    vector<int> arr2 = {2,3,5,5,4,4,2};
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    vector<int> visited(arr2.size(),0);
    vector<int> ans;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j] && visited[j]==0){
                ans.push_back(arr1[i]);
                visited[j]=1;
                break;
            }
        }
    }
    for(auto x:ans) cout<<x<<" ";
    cout << endl;
    return 0;
}

// ================= Method 5: Two-pointer with arrays =================
#include <iostream>
#include <algorithm>
using namespace std;

int main_Method5() {
    int arr1[]={1,2,3,4,6,5,4,4};
    int arr2[]={2,3,5,5,4,4,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    int arr[n1+n2];
    int x=0;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else{
            arr[x++]=arr1[i];
            i++; j++;
        }
    }
    for(int k=0;k<x;k++) cout<<arr[k]<<" ";
    cout << endl;
    return 0;
}

// ================= Method 6: Visited array with arrays =================
#include <iostream>
#include <algorithm>
using namespace std;

int main_Method6() {
    int arr1[]={1,2,3,4,6,5,4,4};
    int arr2[]={2,3,5,5,4,4,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    int visited[n2]={0};
    int ans[n1];
    int x=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j] && visited[j]==0){
                ans[x++]=arr1[i];
                visited[j]=1;
                break;
            }
        }
    }
    for(int i=0;i<x;i++) cout<<ans[i]<<" ";
    cout << endl;
    return 0;
}
