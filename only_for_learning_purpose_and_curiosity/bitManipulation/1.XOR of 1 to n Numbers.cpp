
// #include<iostream>
// using namespace std;
// int soluttion(int n){
//     int res=0;
//     for(int i=1;i<=n;i++){
//         res^=i;
//     }
//     return res;
// }
// int main(){
//     int n;cin>>n;
//     cout<<soluttion(n);
    
// }

#include<iostream>
using namespace std;
int solution(int n){
    if(n%4==0) return n;
     else if(n%4==1) return 1;
     else if(n%4==2) return n+1;
    // else return 0;
}
int main(){
    int n;cin>>n;
    cout<<solution(n);

}
