class Solution {
public:
    int reverse(int x) {
    int  ans=0;

    while(x!=0){
        int rem=x%10;
        x/=10;
        

        if(ans>INT_MAX/10||ans<INT_MIN/10) return 0;
                ans=ans*10+rem;

    }
 return ans;
    }
};
_____________________________________________________________________________________
class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        while (x != 0) {
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        if (ans < INT_MIN || ans > INT_MAX) return 0;
        return (int)ans;
    }
};
