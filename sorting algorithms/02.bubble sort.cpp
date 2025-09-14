// _____________1. Naïve Bubble Sort_____________
// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={3,5,3,6,4,9};
//      int n=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(a[j]>a[j+1]) swap(a[j],a[j+1]);
//         }
//     }
//       for(int i=0;i<n;i++) cout<<a[i]<<" ";

// }
// ________________________2. Optimized Bubble Sort_____________________________



// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={3,5,3,6,4,9};
//      int n=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<n-1;i++){
//         bool swapped=false;
//         for(int j=0;j<n-1-i;j++){
//             if(a[j]>a[j+1]) {
//                   swap(a[j],a[j+1]);
//             swapped=true;
//             }
            
          
//         }
//         if(!swapped) break;
//     }
//       for(int i=0;i<n;i++) cout<<a[i]<<" ";

// }
// ___________________________3. Cocktail Shaker Sort_____________________________

// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={3,5,3,6,4,9};
//      int n=sizeof(a)/sizeof(a[0]);
//      bool swapped=true;
//      int start=0,end=n-1;
//      while(swapped){
//         swapped=false;
//         for(int i=start;i<end;i++){
//             if(a[i]>a[i+1]) {
//                 swap(a[i],a[i+1]);
//                 swapped=true;
//             }
//         }
//         if(!swapped) break;
//         end--;
//         swapped=false;
//         for(int i=end-1;i>=start;i--){
//             if(a[i]>a[i+1]) {
//                 swap(a[i],a[i+1]);
//                 swapped=true;
//             }
//         }
//         start++;
//      }
//      for(int i=0;i<n;i++) cout<<a[i]<<" ";
// }

// _____________________4. Recursive Bubble Sort__________________________
// #include<iostream>
// using namespace std;
// void bubblesort(int a[],int n){
//     if(n<=1) return;
//     bool swapped=false;

//     for(int i=0;i<n;i++){
//         if(a[i]>a[i+1]) {
//             swap(a[i],a[i+1]);
//             swapped=true;
//         }
//     }
//      if(!swapped) return;
//     bubblesort(a,n-1);

// }
// int main(){
//     int a[]={3,5,3,6,4,9};
//      int n=sizeof(a)/sizeof(a[0]);
//      bubblesort(a,n);
//      for(int i=0;i<n;i++) cout<<a[i]<<" ";

// }

// #include<iostream>
// using namespace std;
// void bubblesort(int a[],int n){
//     if(n<=1) return;

//     for(int i=0;i<n;i++){
//         if(a[i]>a[i+1]) {
//             swap(a[i],a[i+1]);
//         }
//     }
//     bubblesort(a,n-1);

// }
// int main(){
//     int a[]={3,5,3,6,4,9};
//      int n=sizeof(a)/sizeof(a[0]);
//      bubblesort(a,n);
//      for(int i=0;i<n;i++) cout<<a[i]<<" ";

// }

// __________Bubble Sort with Last Swap Position_________


#include<iostream>
using namespace std;
int main(){
     int a[]={3,5,3,6,4,9};
     int n=sizeof(a)/sizeof(a[0]);
     int bound=n-1;
     while(bound>0){
        int lastswap=0;
        for(int i=0;i<bound;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                lastswap=i;
            }
        }
        bound=lastswap;
     }
      for(int i=0;i<n;i++) cout<<a[i]<<" ";

}

