// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>ans(nums1.size());
//     stack<int>s;
//     unordered_map<int,int>ump;
//     for(int i=nums2.size()-1;i>=0;i--){
//         while(!s.empty()&&s.top()<=nums2[i]) s.pop();
//         if(!s.empty()) ump[nums2[i]]=s.top();
//         else ump[nums2[i]]=-1;
//         s.push(nums2[i]);
//     }
//     for(int i=0;i<nums1.size();i++) ans[i]=ump[nums1[i]];

//     return ans;
        
//     }
// };


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      vector<int> ans(nums1.size(), -1);

    for(int i = 0; i < nums1.size(); i++){
        for(int j = 0; j < nums2.size(); j++){
            if(nums1[i] == nums2[j]){
                for(int k = j+1; k < nums2.size(); k++){
                    if(nums2[k] > nums1[i]){
                        ans[i] = nums2[k];
                        break; 
                    }
                }
                break; 
            }
        }
    }

    return ans;
        
    }
};
