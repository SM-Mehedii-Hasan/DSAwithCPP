
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            set<int>hash;
            for(int j=i+1;j<n;j++){
                int third=-(nums[i]+nums[j]);
                if(hash.find(third)!=hash.end()){
                    vector<int>triplet={nums[i],nums[j],third};
                    sort(triplet.begin(),triplet.end());
                    st.insert(triplet);
                }
                hash.insert(nums[j]);
            }
        }
        vector<vector<int>>result(st.begin(),st.end());
        return result;
    }
};
________________________________________________________________________
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n-1;
            if(i>0&&nums[i]==nums[i-1]) continue;
                 while(left<right){
                    if(nums[i]+nums[left]+nums[right]>0) right--;
                 else if(nums[i]+nums[left]+nums[right]<0) left++;
                 else {
                        result.push_back({nums[i],nums[left],nums[right]});
                        while(left<right&&nums[left]==nums[left+1]) left++;
                        while(right>left&&nums[right]==nums[right-1]) right--;
                        left++;
                        right--;

                    
                    
                 
                 }
        }
        }
        return result;
    }
};




// ******************************************************************************

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>result;
        set<vector<int>>st;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int x=0-nums[i]-nums[j];
              if (binary_search(nums.begin() + j + 1, nums.end(), x)){
                vector<int>triplet={nums[i],nums[j],x};
               if (!binary_search(result.begin(), result.end(), triplet)){
                    result.push_back(triplet);
                }
              }
            }
        }
        return result;
        
    }
};



// *******************************************************************************************************
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>result;
        set<vector<int>>st;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int x=0-nums[i]-nums[j];
              if (binary_search(nums.begin() + j + 1, nums.end(), x)){
                vector<int>triplet={nums[i],nums[j],x};
                if(find(result.begin(),result.end(),triplet)==result.end()){
                    result.push_back(triplet);
                }
              }
            }
        }
        return result;
        
    }
};










// ********************************************************************************************************
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
     vector<vector<int>>result;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int>triplet={nums[i],nums[j],nums[k]};
                        
                       

                    }
                }
            }
        }
           
           return result;
        
    }
};



// **********************************************************************************

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int>triplet={nums[i],nums[j],nums[k]};
                        sort(triplet.begin(),triplet.end());
                        st.insert(triplet);
                       

                    }
                }
            }
        }
           vector<vector<int>>result(st.begin(),st.end());
           return result;
        
    }
};



// ***************************************************************************************
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
