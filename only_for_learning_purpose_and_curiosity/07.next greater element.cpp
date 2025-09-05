// // //Next Greater Element

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v={1,2,7,5,3,6};
  
//     for(size_t i=0;i<v.size();i++){
//           int next=-1;
//         for(size_t j=i+1;j<v.size();j++){
//             if(v[i]<v[j]) {
//                 next=v[j];
//                 break;
//             }
//         }
//         cout<<v[i]<<"-->"<<next<<endl;
//     }

// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 7, 3, 2, 6};

//     for (int i = v.size() - 1; i >= 0; i--) {  
//         int next = -1;
//         for (int j = i + 1; j < v.size(); j++) {
//             if (v[i] < v[j]) {
//                 next = v[j];
//                 break;
//             }
//         }
//         cout << v[i] << " --> " << next << endl;
//     }
// }

#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,6> arr={1, 2, 7, 3, 2, 6};
    array<int,6>nge;
    for(int i=0;i<nge.size();i++) nge[i]=-1;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]<arr[j]){
                nge[i]=arr[j];
                break;
            }

        }
    }
    for(int i=0;i<nge.size();i++) cout<<nge[i]<<" ";
    cout<<endl;
}
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
//     vector<int> v={1, 2, 7, 3, 2, 6};
//    vector<int> nge(v.size(), -1);
//     stack<int>s;

// for(int i=v.size()-1;i>=0;i--){
//     while(!s.empty()&&s.top()<=v[i]) s.pop();
//     if(!s.empty()) nge[i]=s.top();
//     s.push(v[i]);

// }
// for(auto x:nge) cout<<x<<" ";
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={6, 5, 4, 3, 2, 1, 7};
    vector<int>ans(v.size());
    stack<int>s;
    for(int i=v.size()-1;i>=0;i--){
        while(!s.empty()&&s.top()<=v[i]) s.pop();
        if(!s.empty()) ans[i]=s.top();
        else ans[i]=-1;
        s.push(v[i]); 
    }
    for(auto x:ans) cout<<x<<" ";
     
}
