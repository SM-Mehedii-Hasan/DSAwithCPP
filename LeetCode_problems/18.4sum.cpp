

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
     vector<vector<int>>result;

        for(int i=0;i<n-3;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; 
                  int left=j+1;int right=n-1;
                while(left<right){
                    long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum>target) right--;
                    else if(sum<target) left++;
                    else {
                      result.push_back({nums[i], nums[j], nums[left], nums[right]});
                       
                      while(left<right&&nums[left]==nums[left+1]) left++;
                      while(right>left&&nums[right]==nums[right-1]) right--;

                        left++;right--;
                    }
                }

            }
        }
        return result;
        
    }
};


// _________________________________________________________________________________________________________________



class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>st;

        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                  int left=j+1;int right=n-1;
                while(left<right){
                    long long sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum>target) right--;
                    else if(sum<target) left++;
                    else {
                        vector<int>quadruplets={nums[i],nums[j],nums[left],nums[right]};
                        st.insert(quadruplets);
                       
                   

                        left++;right--;
                    }
                }

            }
        }
        vector<vector<int>>result(st.begin(),st.end());
        return result;
        
    }
};





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
