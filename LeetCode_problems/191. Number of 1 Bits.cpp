// 191. Number of 1 Bits
// _____________________1: Bit manipulation (n & 1)__________________________________

// #include<iostream>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    int count=0;
//    while(n!=0){
//       if(n&1==1) count++;
//      n= n>>1;

//    }
//    cout<<count<<endl;
// }


// ______Brian Kernighan’s Algorithm for counting set bits (Hamming weight).___________
// #include<iostream>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    int count =0;
//    while(n){
//        count++;
//       n=n&n-1;
//    }
//    cout<<count<<endl;

// }
//____________________Counting set bits (also called Hamming Weight or Population Count (popcount)).__________
//#include<iostream>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    cout<<__builtin_popcount(n)<<endl;
// }
