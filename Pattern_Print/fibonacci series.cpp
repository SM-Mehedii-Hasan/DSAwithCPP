
//________________________1. Iterative Method (Bottom-Up without array, just variables).__________________________________
// #include<iostream>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int a=0,b=1;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     for(int i=3;i<=n;i++){
//        int nextnumber=a+b;
       
//        a=b;
//        b=nextnumber;
//         cout<<nextnumber<<endl;
      
//     }
//    }//==>>alternate all print in for loop:
// #include<iostream>
// using namespace std ;
// int main(){
//    int n;cin>>n;
//    long long a=0,b=1,next;
//    for(int i=1;i<=n;i++){
//       cout<<a<<endl;
//       next=a+b;
//       a=b;
//       b=next;

//    }
// }
// ____________________2.recursive version of Fibonacci.(naive recursion)_____________________________________



// #include<iostream>

// using namespace std;
// long long  fib(int n){
//    if(n<=1) return n;
//    return fib(n-1)+fib(n-2);
// }
// int main(){
//    int n; cin>>n;
//    for(int i=0;i<n;i++){
//       cout<<fib(i)<<endl;
//    }

// }

// _________________3.Top-Down Recursion with Memoization__________
// #include<iostream>
// using namespace std;
// long long dp[1000];
// long long fib(int n){
//    if(n<=1) return n;
//    if(dp[n]!=-1) return dp[n];
//    return dp[n]=fib(n-1)+fib(n-2);

// }
// int main(){
//    int n;cin>>n;
//    for(int i=0;i<n;i++) dp[i]=-1;
//    for(int i=0;i<n;i++){
//       cout<<fib(i)<<endl;
//    }


// }
//___________4.Iterative Dynamic Programming (Bottom-Up) using array_______
// #include<iostream>
// using namespace std;
// int main(){
//    int n;cin>>n;
//    long long a[n+1];
//    a[0]=0;
//    a[1]=1;
//    for(int i=0;i<n;i++){
//       if(i<=1) a[i]=a[i];
//        else a[i]= a[i-1]+a[i-2];
//        cout<<a[i]<<endl;

//    }
// }
