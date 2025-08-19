// power of two
// ________________________1.using bitwise trick____________________________________
// #include<iostream>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    if((n&(n-1))==0) cout<<n<<" is the power of two"<<endl;
//    else cout<<n<<" isn't the power of two"<<endl;
// }
// ______________2.iterative multiplication method_____________________________

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;cin>>n;
//    if(n==1) {cout<<n<<" is the power of two"<<endl; return 0;}
//    int y=1;
//    while(y<=n){
//       y=2*y;
//       if(y==n) {cout<<n<<" is the power of two"<<endl;return 0;}

//    }
//    cout<<n<<" isn't the power of two"<<endl;

// }




//________________________3.Division Method (Iterative)__________________________
// #include<iostream>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    if(n<=0){cout<<n<<" isn't the power of two"<<endl; return 0;}
//    while(n%2==0){
//       n/=2;
//    }
//    if(n==1) {cout<<n<<" is the power of two"<<endl; return 0;}
//    else {cout<<n<<" isn't the power of two"<<endl; return 0;}

// }
// _________________________4.Recursive Division______________________

// #include<iostream>
// using namespace std;
// int isPowerOfTwo(int n){
//    if(n==1) {cout<<n<<" is the power of two"<<endl; return 0;}
//    if(n%2!=0) {cout<<n<<" isn't the power of two"<<endl; return 0;}
//    return isPowerOfTwo(n/2);

// }
// int main(){
//    int n;cin>>n;
//    isPowerOfTwo(n);
   

// }
// ______________5.Using Logarithm (math approach)___________________________

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    if(n>0&&(floor(log2(n))==ceil(log2(n)))) cout<<n<<" is the power of two"<<endl;
//    else cout<<n<<" isn't the power of two"<<endl; 
// }
//_____________6.Precompute____________________
// #include<iostream>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    int check=false;
//    for(int i=1;i<=n;i*=2){
//       if(i==n) check=true;
//    }
//    if(check) cout<<n<<" is the power of two"<<endl;
//    else cout<<n<<" isn't the power of two"<<endl;
// }
