// ============================================================
// Method 1: Two-pointer approach with sorted vectors
// ============================================================
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> arr1 = {1, 3, 4};
  vector<int> arr2 = {2, 4, 6, 5};

  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());

  int n1 = arr1.size();
  int n2 = arr2.size();
  vector<int> unionArr;

  int i = 0, j = 0;

  while (i < n1 && j < n2)
  {
    // Skip duplicates in arr1
    if (i > 0 && arr1[i] == arr1[i - 1])
    {
      i++;
      continue;
    }
    // Skip duplicates in arr2
    if (j > 0 && arr2[j] == arr2[j - 1])
    {
      j++;
      continue;
    }

    if (arr1[i] < arr2[j])
    {
      unionArr.push_back(arr1[i++]);
    }
    else if (arr2[j] < arr1[i])
    {
      unionArr.push_back(arr2[j++]);
    }
    else
    {
      unionArr.push_back(arr1[i++]);
      j++;
    }
  }

  // Handle remaining elements in arr1
  while (i < n1)
  {
    if (i == 0 || arr1[i] != arr1[i - 1])
    {
      unionArr.push_back(arr1[i]);
    }
    i++;
  }

  // Handle remaining elements in arr2
  while (j < n2)
  {
    if (j == 0 || arr2[j] != arr2[j - 1])
    {
      unionArr.push_back(arr2[j]);
    }
    j++;
  }

  // Print the union
  cout << "Method 1 (Two-pointer sorted vectors): ";
  for (auto x : unionArr)
  {
    cout << x << " ";
  }
  cout << "\n";

  return 0;
}

// ============================================================
// Method 2: Using std::set
// ============================================================
// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// int main(){
//     vector<int> arr1 = {1, 2, 3, 4};
//   vector<int>arr2 = {3, 4, 5, 6};
//   int n1 = arr1.size();
//   int n2 =arr2.size();
//   set<int>unionArr;
//   int i=0,j=0;
//   while(i<n1){
//     unionArr.insert(arr1[i++]);
//   }
//   while(j<n2){
//     unionArr.insert(arr2[j++]);
//   }
//   cout << "Method 2 (Set): ";
//   for(auto x:unionArr) cout<<x<<" ";
// }

// ============================================================
// Method 3: Using std::unordered_set + sort
// ============================================================
// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include <unordered_set>
// using namespace std;
// int main(){
//   vector<int> arr1 = {1, 2, 3, 4};
//   vector<int>arr2 = {3, 4, 5, 6};
//   int n1 = arr1.size();
//   int n2 =arr2.size();
//   unordered_set<int>unionArr;
//   for(int i=0;i<n1;i++) unionArr.insert(arr1[i]);
//   for(int i=0;i<n2;i++) unionArr.insert(arr2[i]);
//     vector<int> result(unionArr.begin(), unionArr.end());
//     sort(result.begin(), result.end());
//     cout << "Method 3 (Unordered_set + sort): ";
//     for(auto x:result) cout<<x<<" ";
// }

// ============================================================
// Method 4: Using array + std::set
// ============================================================
// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// int main(){
//   vector<int> arr1 = {1, 2, 3, 4};
//   vector<int>arr2 = {3, 4, 5, 6};
//   int n1 = arr1.size();
//   int n2 =arr2.size();
//   set<int>unionArr;
//   for(int i=0;i<n1;i++) unionArr.insert(arr1[i]);
//   for(int i=0;i<n2;i++) unionArr.insert(arr2[i]);
//   cout << "Method 4 (Array + Set): ";
//   for(auto x:unionArr) cout<<x<<" ";
// }

// ============================================================
// Method 5: Using simple arrays + two-pointer merge
// ============================================================
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr1[] = {1, 2, 3, 4};
//     int arr2[] = {3, 4, 5, 6};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);
//     int n2 = sizeof(arr2)/sizeof(arr2[0]);
//     sort(arr1,arr1+n1);
//     sort(arr2,arr2+n2);
//     int unionArr[n1+n2];
//     int i=0,j=0,k=0;
//     while(i<n1&&j<n2){
//       if(arr1[i]<arr2[j]) unionArr[k++]=arr1[i++];
//       else if(arr2[j]<arr1[i]) unionArr[k++]=arr2[j++];
//       else {
//         unionArr[k++]=arr1[i++];
//         j++;
//       }
//     }
//       while (i < n1) {
//         unionArr[k++] = arr1[i++];
//     }
//     while (j < n2) {
//         unionArr[k++] = arr2[j++];
//     }
//     cout << "Method 5 (Array two-pointer merge): ";
//     for(int i = 0; i < k; i++)
//         cout << unionArr[i] << " ";
// }

// ============================================================
// Method 6: Using array + nested loop check
// ============================================================
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//  int arr1[] = {2, 5, 3, 4};
//     int arr2[] = {1,3, 4, 5, 6};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);
//     int n2 = sizeof(arr2)/sizeof(arr2[0]);
//     int unionArr[n1+n2];
//     int k = 0;
//     for(int i=0;i<n1;i++) unionArr[k++]=arr1[i];
//     for(int i=0;i<n2;i++){
//       bool check=false;
//       for(int j=0;j<k;j++){
//         if(arr2[i]==unionArr[j]){
//           check=true;
//           break;
//         }
//       }
//       if(!check) unionArr[k++]=arr2[i];
//     }
//     sort(unionArr,unionArr+k);
//     cout << "Method 6 (Array nested loop check): ";
//     for(int i=0;i<k;i++) cout<<unionArr[i]<<" ";
// }
// ✅ Optimization Ranking (Best → Worst)

// Method 1 / Method 5 (two-pointer merge after sorting) → Fastest in practice, minimal extra overhead.

// Method 3 (unordered_set + sort) → Fast insertion, but sorting at the end costs O(n log n).

// Method 2 / Method 4 (set) → Simple, but slower due to O(log n) per insertion.

// Method 6 (nested loop) → Very inefficient, not suitable for large arrays.
