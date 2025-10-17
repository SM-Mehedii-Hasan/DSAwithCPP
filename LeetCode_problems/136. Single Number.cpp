class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]) count++;
            }
            if(count==1) ans=nums[i];
            else continue;
                }
                return ans;
                
        
    }
};

________________________________________________________________________
class Solution {
public:
    int singleNumber(vector<int>& nums) {
      map<int,int>hash;
      int ans=-1;
      for(auto num:nums){
        hash[num]++;
      }
      for(auto x:hash){
        if( x.second==1) {
            ans=x.first;
            break;
        }
      }
        return ans;
    }
};
_____________________________________________________________
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        int n=nums.size();
        vector<int>hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(hash[i]==1) {
                ans=i;
                break;
                
            }
        }



        return ans;
        
    }
};
// ________________________________________________________________
// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;

// int main() {
//     vector<int> arr = {1,2,1,2,3,3,4,4,7,8,5,7,5};
//     map<int,int> m;

//     // Count frequencies
//     for (auto x : arr) {
//         m[x]++;
//     }

//     // Find the first element that occurs once (in original order)
//     int ans = -1;
//     for (auto x : arr) {
//         if (m[x] == 1) {
//             ans = x;
//             break;
//         }
//     }

//     cout << ans << endl;
// }


// ________________________________________________________________________
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main() {
//     vector<int> arr = {1,2,1,2,3,3,4,4,7,5,5};
//     int n = arr.size();
//     int maxval = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > maxval) maxval = arr[i];
//     }

//     vector<int> hash(maxval + 1, 0);

//     // Count frequency
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]]++;
//     }

//     // Find the first element that appears once
//     int ans = -1;
//     for (int i = 0; i < n; i++) {
//         if (hash[arr[i]] == 1) {
//             ans = arr[i];
//             break;
//         }
//     }

//     cout << ans;
// }

// ___________________________________________________________________
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[] = {1,2,1,2,3,3,4,7,5,5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     // Find the maximum value
//     int maxval = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i] > maxval) maxval = arr[i];
//     }

//     int hash[maxval + 1] = {0};

//     // Count frequency
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     int ans = -1;
//     // Find the first element with frequency 1
//     for(int i=0;i<=maxval;i++){
//         if(hash[i]==1){
//             ans = i;
//             break;
//         }
//     }

//     cout << ans << endl; 
// }
// _____________________________________________________________________________
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
   
//     vector<int>arr={1,2,1,2,3,3,4,7,4,5,5};
//     int n=arr.size();
//     int ans;
//     for(int i=0;i<n;i++){
//         int  count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]) count++;
//                 if(count>1) break;

//         }
//         if(count ==1) {
//             ans=arr[i];
//             break;
//         }
//     }
//     cout<<ans<<endl;

// }
// __________________________________________________________________
// #include<iostream>
// using namespace std;
// int main(){
   
//     int arr[]={1,2,1,2,3,3,4,7,4,5,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int ans;
//     for(int i=0;i<n;i++){
//         int  count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]) count++;
//                 if(count>1) break;

//         }
//         if(count ==1) {
//             ans=arr[i];
//             break;
//         }
//     }
//     cout<<ans<<endl;

// }
