














// _____________________________________________________________________________________________________________________________________

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>st;
        
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    int fourth=target-nums[i]-nums[j]-nums[k];
                    if(binary_search(nums.begin()+k+1,nums.end(),fourth)) {
                        vector<int>quadruplets={nums[i],nums[j],nums[k],fourth};
                        st.insert(quadruplets);

                    }
                }
            }
        }
        vector<vector<int>>result(st.begin(),st.end());
        return result;
        
    }
};




// _________________________________________________________________________________________________________________________________________________


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        for(int i = 0; i < n-3; i++) {
            for(int j = i+1; j < n-2; j++) {
                for(int k = j+1; k < n-1; k++) {
                    for(int l = k+1; l < n; l++) {
                        if(nums[i] + nums[j] + nums[k] + nums[l] == target) {
                            vector<int> quadruplet = {nums[i], nums[j], nums[k], nums[l]};
                            sort(quadruplet.begin(), quadruplet.end());
                            st.insert(quadruplet);
                        }
                    }
                }
            }
        }
        vector<vector<int>> result(st.begin(), st.end());
        return result;
    }
};
