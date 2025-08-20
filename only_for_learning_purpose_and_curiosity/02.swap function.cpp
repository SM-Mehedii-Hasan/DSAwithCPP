#include<iostream>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}

//_________________method 3: with bitwise xor___________________-
// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
//     a=a^b;
//     b=a^b;
//     a=a^b;
// }
// int main(){
//     int a,b;cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
    
// }






// ____________________method 2:Without Temporary Variable (Using Arithmetic)_________
// #include<iostream>
// using namespace std;
// int swap(int &a,int &b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
// }
// int main(){
//     int a,b;cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
    
// }





// ______________________method 1:With Temporary Variable ___________________________

// #include<iostream>
// using namespace std;
// int swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;

// }
// int main(){
//     int a,b;cin>>a>>b;
//     swap(a,b);
//     cout<<a<<"  "<<b<<endl;
    
// }
