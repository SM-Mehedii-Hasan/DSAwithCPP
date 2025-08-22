// _________ clear the right-most set bit:__________________________________________________
//_____________method 1:Using bitwise AND____________________________________
// #include<iostream>
// using namespace std;
// int ClearRightMostSetBit(int n){
//            return n&(n-1);
// }
// int main(){
//     int n;cin>>n;
//     int x=ClearRightMostSetBit(n);
//     cout<<x<<endl;
// }
//___________________method:2_____________________________
#include<iostream>
using namespace std;
int ClearRightMostSetBit(int n){
           return n& (~(n&((~n)+1)));
}
int main(){
    int n;cin>>n;
    int x=ClearRightMostSetBit(n);
    cout<<x<<endl;
}


