class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int original=x;
        int ans=0;
        while(x>0){
            if(ans>INT_MAX/10||ans<INT_MIN/10) return false;
            ans=ans*10+(x%10);
            x/=10;
        }
        if(ans==original) return true;
        else return  false;
        
    }
};
