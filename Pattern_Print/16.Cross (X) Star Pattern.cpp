// Cross (X) Star Pattern

#include <iostream>
using namespace std;
int main()
{
    int n;cin >> n;
    int m=n/2+1;
    for(int i=1;i<=n;i++){

      for(int j=1;j<=n;j++){
        if(j==i||j==n-i+1||(i==m&&j==m)||j==n-i+1) cout<<"* ";
        else cout<<"  ";
      }
      cout<<endl;


    }
  
}

// *               * 
//   *           *   
//     *       *     
//       *   *       
//         *         
//       *   *       
//     *       *     
//   *           *   
// *               * 


