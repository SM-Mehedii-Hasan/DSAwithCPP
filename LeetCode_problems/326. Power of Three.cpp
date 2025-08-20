
//_________________1.Iterative Division Method__________________________
// #include<iostream>
// using namespace std;
//     bool isPowerOfThree(int n) {
//         if(n<=0) return false;
//         while (n>=1&&n%3==0){
//             n/=3;
//         }
//         if(n==1) return true;

        
        
//     }
//     int main(){
//         int n;cin>>n;
//         if(isPowerOfThree( n) ) cout<<n<<" is the power of three";
//         else cout<<n<<" isn't the power of three";
//     }
// ______________2.Maximum Power Divisibility Trick__________________
// #include<iostream>
// #include<cmath>
// using namespace std;
//  bool isPowerOfThree(int n){
//     int x = 1162261467; // 3^19
   
//     if(x%n==0) return true;
//     else return false;
//  }
// int main(){
//      int n;cin>>n;
//         if(isPowerOfThree( n) ) cout<<n<<" is the power of three";
//         else cout<<n<<" isn't the power of three";
// }
//__________________________3.Logarithmic Method / Logarithm-Based Check______________________
// #include<iostream>
// #include<cmath>
// using namespace std;
//  bool isPowerOfThree(int n){
//        double x;
//        x=log10(n)/log10(3);//log3(n)
//        if(n>0&&x==floor(x)) return true;
//        else return false;
//  }
// int main(){
//      int n;cin>>n;
//         if(isPowerOfThree( n) ) cout<<n<<" is the power of three";
//         else cout<<n<<" isn't the power of three";
// }
// _____________4.Iterative Multiplication / Forward Multiplication Method
#include<iostream>
using namespace std;
 bool isPowerOfThree(int n){
     int x=1;
     while(x<=n){
        if(x==n) return true;
        x*=3;
     }
              return false;
 }
int main(){
     int n;cin>>n;
        if(isPowerOfThree( n) ) cout<<n<<" is the power of three";
        else cout<<n<<" isn't the power of three";
}
