// ________________________Count of numbers (x) smaller than or equal to n such that n+x = n^x:___________________
// #include<iostream>
// #include<cmath>
// using namespace std;
// int bit_length_log(long long n ){
//     if(n==0) return 0;
//     return floor(log2(n))+1;
// }
// int bit_length(long long n){
//     int length=0;
//     if(n==0) return 0;
//     while(n>0){
//         length++;
//         n>>=1;
//     }
//     return length;
// }
// int pop_count(long long n){
//     if(n==0) return 0;
//       int count=0;
//     while(n>0){
//         count++;
//         n=n&(n-1);
        
//     }
//     return count;
// }

// int main(){
//     long long n;cin>>n;
//     cout<<(1LL<<(bit_length_log(n)-pop_count(n)));

// }

// ____________________________________________________________________________________________
// #include<iostream>
// using namespace std;
// int main(){
//     long long n;cin>>n;
//     int ones= __builtin_popcountll(n);
//     int bit_length=64 -__builtin_clzll(n);
//     int zeros=bit_length-ones;
//     cout<<(1LL<<zeros);

// }
// __________________________________________________________________________________________________

#include<iostream>
using namespace std;
int main(){
    long long n;cin>>n;
    int zeros=0;
    while(n){
       if((n&1)==0)zeros++;
        n>>=1;
    }
    cout<<(1LL<<zeros);
}
