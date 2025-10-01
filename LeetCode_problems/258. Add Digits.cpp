class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return (num % 9 == 0) ? 9 : (num % 9);
    }
};
The sum of digits of a number is congruent to the number itself modulo 9.
  Example:
Take num = 38.
38 % 9 = 2
Digit sum: 3 + 8 = 11
11 % 9 = 2
Next digit sum: 1 + 1 = 2
Final answer = 2
👉 At every step, the result is the same modulo 9.

num = 942
942 % 9 = 6
Digit sums: 9 + 4 + 2 = 15, → 1 + 5 = 6
Matches the modulo 9 result.

A number is divisible by 9 ⇔ its digit sum is divisible by 9.
Repeatedly replacing a number by the sum of its digits (the digital-root process) gives you the number modulo 9,
  with the usual convention that a nonzero multiple of 9 has digital root 9 (not 0).
_______________________________________________________________________
class Solution {
public:
    int addDigits(int num) {
     while(num>9){
           int ans=0;
        while(num!=0){
            ans+=num%10;
            num/=10;
        }
        num=ans;
     }
     return num;
        
    }
};
