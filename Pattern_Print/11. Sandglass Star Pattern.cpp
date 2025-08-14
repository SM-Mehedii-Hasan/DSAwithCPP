//  Sandglass Star Pattern

#include <iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int mid=n/2+1;
   for(int i=1;i<=n;i++){
    
    if(i<=mid){
           for(int j=1;j<=i-1;j++) cout<<"  ";
           for(int j=1;j<=n-2*(i-1);j++) cout<<"* ";
    

    }
    else {
        for(int j=1;j<=n-i;j++) cout<<"  ";
        for(int j=1;j<=2*i-n;j++) cout<<"* ";
    }


    cout<<endl;
 

   }

}

// * * * * * * * 
//   * * * * * 
//     * * * 
//       * 
//     * * * 
//   * * * * * 
// * * * * * * * 
