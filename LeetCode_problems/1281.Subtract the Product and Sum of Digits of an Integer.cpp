
// 1281.Subtract the Product and Sum of Digits of an Integer
// ______________________Version 1: Integer-based approach
#include<iostream>
using namespace std;
int main(){
   int n;cin>>n;
   int prod=1;int sum=0;
   int r;int p;
   while(n!=0){
      r=n%10;
      prod*=r;
      sum+=r;
      n=n/10;
   }
   int res=prod-sum;
   cout<<res<<endl;
}

// ____________________________________Version 2: String-based approach
// #include<iostream>
// using namespace std;
// int main(){
//    string s;cin>>s;
//    long long prod=1,sum=0;
//    for(int  c:s){
//       int digit=c-'0';
//       prod*=digit;
//       sum+=digit;

//    }
//    cout<<prod-sum<<endl;
// }
// ____________________________________________Version : array based approach
// #include<iostream>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    int count =0;
//    int arr[100];
//    long long prod=1,sum=0;
//    while(n!=0){
//       arr[count]=n%10;
//       prod*=arr[count];
//       sum+=arr[count];

//       n=n/10;
//       count++;
      

//    }

   
//       cout<<prod-sum<<endl;
   
// }
