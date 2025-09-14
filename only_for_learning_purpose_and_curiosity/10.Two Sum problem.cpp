// ___________________Two Sum problem_________________________________


// ___________1. Brute Force (O(n²))_________
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,7,11,15,27};
//      int n=sizeof(arr)/sizeof(arr[0]);
//     int  target=22;
//     bool found=false;
//     int x,y;
//       for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){

//             if(arr[i]+arr[j]==target) {
//                 x=i,y=j;
//                 found=true;}

//         }
//       }
//       if(found) cout<<arr[x]<<" "<<arr[y]<<endl;
//       else cout<<"target not found";

// }
// ______2. Binary Search Method (O(n log n))______

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {2, 7, 11, 15, 27};
//     int target = 22;
//     int x, y;
//     bool found = false;

//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         int complement = target - arr[i];

//         if (binary_search(arr.begin() + i + 1, arr.end(), complement))
//         {
//             x = arr[i];
//             y = complement;
//             found = true;
//             break;
//         }
//     }

//     if (found)
//         cout << x << " " << y << endl;
//     else
//         cout << "Target not found" << endl;
// }
// _______3. Two-Pointer Method (O(n))________
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15,27};
     int n=sizeof(arr)/sizeof(arr[0]);
    int  target=22;
    bool found=false;
    int left=0;int right=n-1;
    int x,y;
    while(left<right){
        if(arr[left]+arr[right]>target) right--;
        else if(arr[left]+arr[right]<target) left++;
        else {
            found=true;
            x=left;y=right;
            break;


        }
    }
    if(found) cout<<arr[x]<<" "<<arr[y]<<endl;
    else cout<<"not found";




}
