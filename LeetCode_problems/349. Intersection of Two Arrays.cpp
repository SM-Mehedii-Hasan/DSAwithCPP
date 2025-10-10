class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        set<int>s;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]>nums2[j]) j++;
            else {
                s.insert(nums1[i]);
                i++;j++;
            }
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
    }
};


_________________________________________________________________________________
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        vector<int>visited(nums2.size(),0);
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]&&visited[j]==0) {
                    s.insert(nums1[i]);
                    visited[j]=1;
                    break;
                }
            }
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
        
    }
};
