class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;int mul=1;
        if(n==0) return 1;
        while(n>0){
            int rem=n%2;
            rem=rem^1;
            ans=ans+rem*mul;
            mul*=2;
            n/=2;
        }   
        return ans;     
    }
};
_____________________________________________________________________________
class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;int mul=1;
        if(n==0) return 1;
        while(n>0){
            int rem=n%2;
          if(rem==1) rem=0;
          else rem=1;
            ans=ans+rem*mul;
            mul*=2;
            n/=2;
        }   
        return ans;     
    }
};
