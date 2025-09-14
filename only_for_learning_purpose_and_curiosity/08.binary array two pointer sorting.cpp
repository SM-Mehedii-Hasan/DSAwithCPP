// ❓ Question
// You are given a binary array consisting only of 0s and 1s:
// arr = [0, 1, 1, 1, 0, 0, 1]
// Your task is to sort the array in O(n) time and O(1) space, so that all 0s appear before all 1s .
// You are not allowed to use built-in sorting functions.
// Your algorithm should run in linear time.
// Example:
// Input: arr = [0,1,1,1,0,0,1]
// Output: arr = [0,0,0,1,1,1,1]

//  #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,1,1,0,0,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int left=0,right=n-1;
//     while(left<right){
//         if(arr[left]==0) left++;
//         else if(arr[right]==1) right--;
//         else {
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }
       

//     }
//      for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//       }














// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,1,1,0,0,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int count_0=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0) count_0++;
//     }
//     for(int i=0;i<count_0;i++){
//         arr[i]=0;
//     }
//     for(int i=count_0;i<n;i++){
//         arr[i]=1;
//     }
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";

// //     Time Complexity: O(n)
// // Space Complexity: O(1)


// }




















// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr={0,1,1,1,0,0,1};
//     sort(arr.begin(),arr.end());
//     for(auto x:arr) cout<<x<<" ";



//     //     Time Complexity: O(n log n)
// // Space Complexity: O(log n)
// }
