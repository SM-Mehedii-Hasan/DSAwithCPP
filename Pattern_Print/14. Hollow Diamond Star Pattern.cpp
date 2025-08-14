//  Hollow Diamond Star Pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m=n/2+1;
    for (int i = 1; i <= n; i++)
    {
       if(i<=m){
         for(int j=1;j<=n;j++){
            if((i==1&&j==m)||j==m+i-1||j==m-i+1) cout<<"* ";
            else cout<<"  ";
       }
  


        cout << endl;
    }
    else {
        for(int j=1;j<=n;j++){
            if(j==i-m+1||j==n-i+m||(i==n&&j==m)) cout<<"* ";
            else cout<<"  ";

           
        }
         cout<<endl;
    }
}
}

//         *         
//       *   *       
//     *       *     
//   *           *   
// *               * 
//   *           *   
//     *       *     
//       *   *       
//         *         
