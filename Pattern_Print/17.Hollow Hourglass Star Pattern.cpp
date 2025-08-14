// // Hollow Hourglass Star Pattern

#include <iostream>
using namespace std;
int main()
{
  int n;cin>>n;
  for(int i=1;i<=n;i++){
        if(i<=n/2){
            for(int j=1;j<=n/2-i+1;j++) cout<<"* ";
            for(int j=1;j<=2*(i-1);j++) cout<<"  ";
            for(int j=1;j<=n/2-i+1;j++) cout<<"* ";
            cout<<endl;
        }
        else {
            for(int j=1;j<=i-n/2;j++) cout<<"* ";
            for(int j=1;j<=2*(n-i);j++) cout<<"  ";
            for(int j=1;j<=i-n/2;j++) cout<<"* ";
        cout<<endl;
        }





  }
  
}

// // * * * * * * * * 
// // * * *     * * * 
// // * *         * * 
// // *             * 
// // *             * 
// // * *         * * 
// // * * *     * * * 
// // * * * * * * * * 



