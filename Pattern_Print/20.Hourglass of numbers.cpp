
//Hourglass of numbers
#include <iostream>
using namespace std;

int main()
{
   int n;cin>>n;
   int m=n/2+1;
   for(int i=1;i<=n;i++){
      if(i<=m){
         for(int j=1;j<=i-1;j++) cout<<"  ";
         for(int j=1;j<=m-i+1;j++) cout<<j<<" ";
      
      }
      else{
         for(int j=1;j<=n-i;j++) cout<<"  ";
         for(int j=1;j<=m+i-n;j++) cout<<j<<" ";
      }
      cout<<endl;

   }
}

// 1 2 3 4 5 
//   1 2 3 4 
//     1 2 3 
//       1 2 
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 
