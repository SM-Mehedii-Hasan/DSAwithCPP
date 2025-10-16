
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1=0,xor2=0;
        for(int i=1;i<n+1;i++) xor1^=i;
        for(int i=0;i<n;i++) xor2^=nums[i];
        return (xor1^xor2);
        
    }
};
_________________________________________

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        return total - sum;
    }
};











___________________________________________________

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            bool found=false ;
            for(int j=0;j<n;j++){
                if(nums[j]==i) {
                    found=true;
                    break;

                }
            }
            if(!found) {
                m=i;
                break;
            }
        }
        return m;
    }
};
