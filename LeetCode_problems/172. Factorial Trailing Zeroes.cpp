A trailing zero is produced by a factor of 10, and 
10
=
2
×
5
10=2×5.

In 
𝑛
!
n!, there are more factors of 2 than 5, so the number of trailing zeros is determined by the number of 5s in the factorial’s factors.
    class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        for(int i=5;n/i>=1;i*=5){
            count++;
            n/=5;
        }
        return count;        
    }
};

_________________________________________________________________________________________________
class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        while(n>=5){
            count+=n/5;
            n/=5;
        }
        return count;

        
    }
};
