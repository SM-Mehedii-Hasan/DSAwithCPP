
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashtable;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int second=target-first;
            if(hashtable.find(second)!=hashtable.end()){
                return {i,hashtable[second]};
            }
            hashtable[first]=i;
        }
        return {};
    }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<pair<int,int>> v;
//         for (int i = 0; i < nums.size(); i++) 
//             v.push_back({nums[i], i}); 

//         sort(v.begin(), v.end());   
        
//         vector<int> arr;
//         for (int i = 0; i < v.size(); i++) {
//             int complement = target - v[i].first;
            
          
//             auto it = lower_bound(v.begin() + i + 1, v.end(), make_pair(complement, 0));
            
//             if (it != v.end() && it->first == complement) {
//                 arr.push_back(v[i].second);  
//                 arr.push_back(it->second);   
//                 return arr;                 
//             }
//         }
//         return {};  
//     }
// };



// _____________________________________________________


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<pair<int,int>>v;
//         for(int i=0;i<nums.size();i++) v.push_back({nums[i],i});
//         sort(v.begin(),v.end());
//         vector<int>arr;
//         int left=0;int right=v.size()-1;
//         while(left<right){
//             if(v[left].first+v[right].first>target) right--;
//             else if(v[left].first+v[right].first<target) left++;
//             else {
                
//                 arr.push_back(v[left].second);
//                 arr.push_back(v[right].second);
//                   break;
              

//             }
//         }
//         return arr;
        
//     }
// };



// _________________________________________
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>v;
//         bool found=false;
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target) {
//                    v.push_back(i);
//                    v.push_back(j);
//                     found=true;
//                     break;
//                 }
               

//             }
//              if(found) break;
//         }
//         return v;
        
//     }
// };
