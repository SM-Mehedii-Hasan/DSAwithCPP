// ____________________________________1️⃣ Randomized Hoare Partition (first snippet)__________________


#include<iostream>
#include<iomanip>
using namespace std;
int partition(int a[],int l,int h){
        int pivotIndex = l + rand() % (h - l + 1);
    swap(a[l], a[pivotIndex]);
    int pivot = a[l];
    int i=l-1;
    int j=h+1;
   while(true){
     do{i++;}while(a[i]<pivot);
    do{j--;}while(a[j]>pivot);
    if(i>=j) break;
    swap(a[i],a[j]);
   }
   return j;
}
void quicksort(int a[],int l,int h){
    if(l<h){
        int part=partition(a,l,h);
        quicksort(a,l,part);
        quicksort(a,part+1,h);
    }
}
int main(){

      int arr[]={6,2,5,1,3,4,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0;int h=n-1;
    quicksort(arr,l,h);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
















// _____________________________2️⃣ Lomuto Partition (commented out snippet)_________________________________
// #include<iostream>
// using namespace std;

// int partition(int arr[], int l, int h) {
//     int pivot = arr[h];   // choose last element as pivot
//     int i = l - 1;        // place for smaller elements

//     for (int j = l; j < h; j++) {
//         if (arr[j] <= pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[h]); // put pivot in correct place
//     return i + 1;
// }

// void quicksort(int arr[], int l, int h) {
//     if (l < h) {
//         int part = partition(arr, l, h);
//         quicksort(arr, l, part - 1);   // left side of pivot
//         quicksort(arr, part + 1, h);   // right side of pivot
//     }
// }

// int main() {
//     int arr[] = {6, 2, 5, 1, 3, 4, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quicksort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++) 
//         cout << arr[i] << " ";
// }
















// _______________3️⃣ Classic Hoare Partition with middle pivot__________________




// #include<iostream>
// using namespace std;

// int partition(int arr[],int l,int h){
//     int pivot=arr[l+(h-l)/2];
//     int i=l-1;
//     int j=h+1;
//     while(true){
//         do{i++;}while(arr[i]<pivot);
//         do{j--;}while(arr[j]>pivot);
//         if(i>=j) return j;
//         swap(arr[i],arr[j]);
//     }
// }

// void quicksort(int arr[],int l,int h){
//     if(l<h){
//         int part=partition(arr,l,h);
//         quicksort(arr,l,part);
//         quicksort(arr,part+1,h);
//     }
// }

// int main(){
//     int arr[]={6,2,5,1,3,4,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int l=0;int h=n-1;
//     quicksort(arr,l,h);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }

















// ____________4️⃣ Hoare Partition with first element as pivot_______________



// #include<iostream>
// using namespace std;
// int partition(int arr[],int l,int h){
//    int pivot=arr[l];
//    int i=l,j=h+1;
//    while(i<j){
//     do{i++;}while(i<=h&&arr[i]<=pivot);
//     do{j--;}while(j>=l&&arr[j]>pivot);
//     if(i<j) swap(arr[i],arr[j]);
//    }
//    swap(arr[l],arr[j]);
//    return j;
// }
// void  quicksort(int arr[],int l,int h){
//  if(l<h){
//        int part=partition(arr,l,h);
//     quicksort(arr,l,part-1);
//     quicksort(arr,part+1,h);
//  }

// }
// int main(){
//       int arr[]={6,2,5,1,3,4,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int l=0;int h=n-1;
//     quicksort(arr,l,h);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }

















// ________________-5️⃣ Quicksort using extra arrays (Left/Right)_________________-




// #include<iostream>
// using namespace std;
// int  partition(int arr[],int n,int& l,int& r,int left[],int right[]){
//     int pivot=arr[n-1];
//      l=0,r=0;
//     for(int i=0;i<n-1;i++) {
//         if(arr[i]<=pivot) left[l++]=arr[i];
//         else right[r++]=arr[i];
//     }
//    return pivot;

// }
// void quicksort(int arr[],int n){
//     if(n<=1) return;
//     int l,r;
//     int left[n],right[n];
//     int pivot=partition(arr,n,l,r,left,right);
//     quicksort(left,l);
//     quicksort(right,r);
//     int k=0;
//     for(int i=0;i<l;i++) arr[k++]=left[i];
//     arr[k++]=pivot;
//     for(int i=0;i<r;i++) arr[k++]=right[i];
// }
// int main(){
//     int arr[]={6,2,5,1,3,4,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     quicksort(arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    
// }








// _________6️⃣ Another version of extra arrays (last snippet)________________________




// #include<iostream>
// using namespace std;
// void quicksort(int arr[],int n){
//     if(n<=1) return;
//     int pivot=arr[n-1];
//     int l=0,r=0;
//     int left[n],right[n];
//     for(int i=0;i<n-1;i++){
//         if(arr[i]<=pivot) left[l++]=arr[i];
//         if(arr[i]>pivot) right[r++]=arr[i];
//     }
//     quicksort(left,l);
//     quicksort(right,r);

//     int k=0;
//     for(int i=0;i<l;i++) arr[k++]=left[i];
//     arr[k++] = pivot;
//     for(int i=0;i<r;i++) arr[k++]=right[i];

// }
// int main(){
//     // int arr[]={6,2,5,1,3,4,2,3};
//     int arr[]={3,3,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     quicksort(arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";

// }





































