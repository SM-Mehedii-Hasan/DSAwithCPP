class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>result;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int>triplet={nums[i],nums[j],nums[k]};
                        sort(triplet.begin(),triplet.end());
                        if(find(result.begin(),result.end(),triplet)==result.end()){
                            result.push_back(triplet);
                        }

                    }
                }
            }
        }
        return result;
        
    }
};
