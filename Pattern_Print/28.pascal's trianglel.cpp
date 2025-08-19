

//___________________1.Pascal’s Triangle using 2D array______________________________

// #include<iostream>

// using namespace std;
// int main(){


//   int n;
//   cin >> n;

//     int  a[n][n];
//  for(int i=0;i<n;i++){
//   for(int j=0;j<=i;j++){
//     if(i==j||j==0)  a[i][j]=1;
//     else a[i][j]=a[i-1][j-1]+a[i-1][j];
//   }
//  }

//   for(int i=0;i<n;i++){
//   for(int j=0;j<=i;j++){
//   cout<<a[i][j]<<" ";
//   }cout<<endl;
//  }

// }
//___________________________________2.In-place iterative Pascal’s Triangle generation using a 1D array_______________________

// #include<iostream>
// using namespace std;
// int a[100];
// int main(){
//   int n;cin>>n;
//   a[0]=1;
//   for(int i=0;i<n;i++){
//     for(int j=i;j>0;j--){
//       a[j]=a[j]+a[j-1];
//     }
//     for(int j=0;j<=i;j++) cout<<a[j]<<" ";
//     cout<<endl;
//   }

// }


//_____________________3.Pascal’s Triangle Generation using Binomial Coefficient Formula (In-place, without arrays)________________________________
// #include<iostream>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     for(int i=0;i<n;i++){
//         long long  val=1;
//         for(int j=0;j<=i;j++){
//             cout<<val<<" ";
//             val=val*(i-j)/(j+1);
//         }cout<<endl;
             

//     }
// }


//_________________________4.recursive version of Pascal’s Triangle_______________________________________________________________--

// #include<iostream>
// using namespace std;

// int nCr(int n,int r){
//   if(r==n||r==0) return 1;
  
//     return nCr(n-1,r-1)+nCr(n-1,r);
// }
// int main(){
//   int n;cin>>n;
 
//   for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++) cout<<nCr(i,j)<<" " ;
//     cout<<endl; 
//   }

// }

// ____________5.Top-Down Dynamic Programming (Recursive Memoization Method for Binomial Coefficients / Pascal’s Triangle).



#include<iostream>
using namespace std;
long long dp[1000][1000];
int nCr(int n,int r){
  if(r==n||r==0) return 1;
  if(dp[n][r]!=-1) return dp[n][r];
    return dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
}
int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) dp[i][j]=-1;
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++) cout<<nCr(i,j)<<" " ;
    cout<<endl; 
  }

}
