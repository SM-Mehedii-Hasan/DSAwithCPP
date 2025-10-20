class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
                   int sum=0;
          
            for(int j=i;j<nums.size();j++){
           
                sum+=nums[j];
                if(sum==k) count++;
            }
        }
        return count;
        
    }
};

__________________________tle_________________________
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
          
            for(int j=i;j<nums.size();j++){
                  int sum=0;
                for(int l=i;l<=j;l++){
                    sum+=nums[l];
                }
                if(sum==k) count++;
            }
        }
        return count;
        
    }
};
