// __________________method 1:bitmask check_____________________
// #include<iostream>
// using namespace std;
// int main(){
//     uint32_t n;
//     unsigned k;
//     cin>>n>>k;
//      if(n==0)  {cout<<" divisible by 2^"<<k<<endl; return 0;}
//     if(k>=32) {cout<<"not divisible by 2^"<<k<<endl; return 0;}
   
//     uint32_t mask=(1u<<k)-1u;
//     if((n&mask)==0) cout<<"divisible by 2^"<<k<<endl;
//     else cout<<"not divisible by 2^"<<k<<endl;
// }
// _______________method 2: use n & -n (lowest set bit)_________________
// #include<iostream>
// using namespace std;
// int main(){
// uint32_t n;
// unsigned k;
// cin>>n>>k;
//   if(n==0)  {cout<<" divisible by 2^"<<k<<endl; return 0;}
//     if(k>=32) {cout<<"not divisible by 2^"<<k<<endl; return 0;}
//     uint32_t lowest_set_bit=n&((~n)+1);
//     if(lowest_set_bit>=(1u<<k)) cout<<"divisible by 2^"<<k<<endl; 


// }

// ____________________method 3: count trailing zeros______________________
// #include<iostream>
// using namespace std;
// int count_trailing_zeros(uint32_t n){
//     if (n == 0) return 32;
//     int count=0;
//     while((n&1)==0){
//         count++;
//         n=n>>1;

//     }
//     return count;
// }
// int main(){
//     uint32_t n; unsigned k;
//     cin>>n>>k;
//      if(k==0)  {cout<<" divisible by 2^"<<k<<endl; return 0;}
//     if(k>=32) {cout<<"not divisible by 2^"<<k<<endl; return 0;}
//     if(count_trailing_zeros(n)>=k) cout<<" divisible by 2^"<<k<<endl;
//     else cout<<"not divisible by 2^"<<k<<endl;


// }
// ______________

// #include<iostream>
// using namespace std;
// int count_trailing_zeros(uint32_t n){
//     if (n == 0) return 32;
//     int count=0;
//     uint32_t lowest_set_bit=n& -(int32_t)n;

//     while(lowest_set_bit>1){
//         count++;
//         lowest_set_bit>>=1;

//     }
//     return count;
// }
// int main(){
//     uint32_t n; unsigned k;
//     cin>>n>>k;
//      if(k==0)  {cout<<" divisible by 2^"<<k<<endl; return 0;}
//     if(k>=32) {cout<<"not divisible by 2^"<<k<<endl; return 0;}
//     if(count_trailing_zeros(n)>=k) cout<<" divisible by 2^"<<k<<endl;
//     else cout<<"not divisible by 2^"<<k<<endl;


// }
// _____________________method 4:Using compiler builtin (GCC/Clang/MSVC)_______________________
#include<iostream>
using namespace std;

int main(){
    uint32_t n; unsigned k;
    cin>>n>>k;
     if(n==0||k==0)  {cout<<" divisible by 2^"<<k<<endl; return 0;}
    if(k>=32) {cout<<"not divisible by 2^"<<k<<endl; return 0;}
    if(__builtin_ctz(n)>=k) cout<<" divisible by 2^"<<k<<endl;
    else cout<<"not divisible by 2^"<<k<<endl;


}
