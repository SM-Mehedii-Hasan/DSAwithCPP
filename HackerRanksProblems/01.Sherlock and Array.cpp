
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        int total =0;
        bool check=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total+=arr[i];

        }
        int left=0,right;
        for(int i=0;i<n;i++){
            right=total-left-arr[i];
            if(right==left){
                check=true;
                break;
            } 
            left+=arr[i];
        }
        check?cout<<"YES\n":cout<<"NO\n";
        
    }

}
// ____________________________________________________
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;cin>>t;
//     while(t--){
//         int n;cin>>n;
//         int arr[n];
//         int pre[n];
//         for(int i=0;i<n;i++)pre[i]=0;
//         int check=false;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         for(int i=0;i<n;i++){
//             if(i==0) pre[i]=arr[i];
//             else pre[i]=pre[i-1]+arr[i];
//         }

//         int left=0;int right=0;
//         for(int i=0;i<n;i++){
//             if(i==0) left=0;
//             else left=pre[i-1];
//             right=pre[n-1]-pre[i];
//             if(left==right) {
//                 check=true;
//                 break;
//             }
//         }
//         if(check) cout<<"YES\n";
//         else cout<<"NO\n";
        
//     }

// }
// _____________________________________________________________________________
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;cin>>t;
//     while(t--){
//         int n;cin>>n;
//         int arr[n];
//         int check=false;
//         for (int i = 0; i < n; i++) cin >> arr[i];
//         for(int i=0;i<n;i++){
//             int left=0;
//             int right=0;
//             for(int j=0;j<i;j++){
//                 left+=arr[j];
//             }
//             for(int j=i+1;j<n;j++){
//                 right+=arr[j];
//             }
//             if(left==right) {check=true;break;}
//         }

//         check?cout<<"YES\n":cout<<"NO\n";
//     }

// }


// // _____________________________________________________
// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         vector<int> arr(n);
// //         for (int i = 0; i < n; i++)
// //             cin >> arr[i];

// //         bool x = false;

// //         for (int i = 0; i < n; i++)
// //         {
// //             int l = 0, r = 0;
// //             for (int j = 0; j < n; j++)
// //             {
// //                 if (i == 0)
// //                 {

// //                     if (j > 0)
// //                         r += arr[j];
// //                 }
// //                 else if (i == n - 1)
// //                 {

// //                     if (j < n - 1)
// //                         l += arr[j];
// //                 }
// //                 else
// //                 {

// //                     if (j < i)
// //                         l += arr[j];
// //                     else if (j > i)
// //                         r += arr[j];
// //                 }
// //             }
// //             if (l == r)
// //             {
// //                 x = true;
// //                 break;
// //             }
// //         }

// //         cout << (x ? "YES\n" : "NO\n");
// //     }
// // }
// // // 
