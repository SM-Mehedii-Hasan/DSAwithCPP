second largest element in the array.

method 1:This code is correct for distinct numbers.
But if the array had duplicates of the largest element (e.g., {50, 50, 48}), 
then it would still return 50 as the second largest, which may not be what you want.
#include<iostream>
using namespace std;
int main(){
    int a[]={25,16,38,10,35,48,20,50,50};
    int max1,max2;
    if(a[0]>a[1]) {
        max1=a[0];
        max2=a[1];
    }
    else {
        max1=a[1];
        max2=a[0];
    }
    for(int i=2;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2){
            max2=a[i];
        }
    }
    cout<<max2<<endl;
}
 _________________________________________________________________________________________

#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a[]={25,16,38,10,35,48,20,50,50};
    int a[]={50,50,50};
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++ ){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2&&a[i]<max1){
            max2=a[i];

        }
    }
    cout<<max2<<endl;
}
________________________________________________________________________
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={25,16,38,10,35,48,20,50,50};
    int n=arr.size();
    int max2;
     sort(arr.begin(),arr.end());
     for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]) {
            max2=arr[i];
        break;
        }
     }
   
    cout<<max2<<endl;
}


