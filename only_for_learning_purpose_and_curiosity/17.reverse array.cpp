// ======================= 1. XOR Swap Method =======================
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int left = 0, right = n-1;
    while(left < right){
        arr[left] = arr[left] ^ arr[right];
        arr[right] = arr[left] ^ arr[right];
        arr[left] = arr[left] ^ arr[right];
        left++;
        right--;
    }

    for(auto x : arr) cout << x << " ";
}


// ======================= 2. Recursion Method =======================
#include<iostream>
using namespace std;
void reverseArray(int arr[],int left,int right){
    if(left>=right) return;
    swap(arr[left],arr[right]);
    reverseArray(arr,left+1,right-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left=0,right=n-1;
    reverseArray(arr,left,right);
    for(auto x:arr) cout<<x<<" ";
}


// ======================= 3. STL reverse Method =======================
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}


// ======================= 4. Stack Method =======================
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=st.top();
        st.pop();
    }
    for(auto x:arr) cout<<x<<" ";
}


// ======================= 5. For-loop Swap Method =======================
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(auto x:arr) cout<<x<<" ";
}


// ======================= 6. Two-pointer Swap Method =======================
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left=0,right=n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(auto x:arr) cout<<x<<" ";
}


// ======================= 7. Extra Array Method =======================
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    int x=0;
    for(int i=n-1;i>=0;i--){
        ans[x++]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}




_________________________________________________________________
| Method           | In-place | Extra Memory | Notes                           |
| ---------------- | -------- | ------------ | ------------------------------- |
| `for` loop swap  | ✅        | ❌            | Simple & readable               |
| Two-pointer swap | ✅        | ❌            | Same as above                   |
| XOR swap         | ✅        | ❌            | No temp, less readable          |
| Recursion        | ✅        | ❌ (stack)    | Elegant, educational            |
| STL `reverse()`  | ✅        | ❌            | Clean, recommended              |
| Extra array      | ❌        | ✅            | Uses extra space                |
| Stack            | ❌        | ✅            | Uses extra space, teaches stack |



| Scenario                 | Best Method                       |
| ------------------------ | --------------------------------- |
| Learning C++ basics      | For-loop swap or Two-pointer swap |
| Real-world production    | STL `reverse()`                   |
| Recursion practice       | Recursion method                  |
| Must not modify original | Extra array or stack              |
