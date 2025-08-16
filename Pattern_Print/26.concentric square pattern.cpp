#include <iostream>
using namespace std;

int main() {
  int n;cin>>n;
  int size=2*n-1;
  int center=n-1;




// Maximum Distance from Center Method

  // for(int i=0;i<=size-1;i++){
  //   for(int j=0;j<=size-1;j++){
  //     int v=abs(i-center);
  //     int h=abs(j-center);
  //     int distance=max(v,h);
  //     cout<<distance+1<<" ";
  //   }cout<<endl;
  // }









  //Minimum Distance from Edges Method
//   for(int i=0;i<=size-1;i++){
//     for(int j=0;j<=size-1;j++){
//       int top=i;
//       int left=j;
//       int bottom=size-1-i;
//       int right=size-1-j;
//       int layer=min(min(top,right),min(left,bottom));
//       cout<<n-layer<<" ";
//   }cout<<endl;
// }
}


// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 
