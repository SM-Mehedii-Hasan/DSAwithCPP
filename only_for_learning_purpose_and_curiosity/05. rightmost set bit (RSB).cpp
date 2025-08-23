// Question: RSB Subset Sum

// Problem:
// You are given an array of n positive integers. 
// For each number in the array, compute the rightmost set bit (RSB), 
// and then find the sum of all distinct RSB values in the array.

// Input:

// First line: integer n (size of the array, 1 <= n <= 10^5)

// Second line: n integers a1, a2, ..., an (1 <= ai <= 10^9)

// Output:

// A single integer — the sum of all distinct rightmost set bit values.

// Example 1:

// Input:
// 5
// 10 12 6 4 8

// Output:
// 14


// Explanation:

// Binary representations:

// 10 → 1010 → RSB = 2

// 12 → 1100 → RSB = 4

// 6 → 0110 → RSB = 2

// 4 → 0100 → RSB = 4

// 8 → 1000 → RSB = 8

// Distinct RSB values: 2, 4, 8

// Sum = 2 + 4 + 8 = 14

// Example 2:

// Input:
// 4
// 1 2 3 4

// Output:
// 7


// Explanation:

// Binary:

// 1 → 0001 → RSB = 1

// 2 → 0010 → RSB = 2

// 3 → 0011 → RSB = 1

// 4 → 0100 → RSB = 4

// Distinct RSB values: 1, 2, 4 → Sum = 7

// Hint / Approach:

// Use rsb = n & -n to compute RSB for each number.

// Store distinct RSB values in a set.

// Sum all values in the set.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int a[n];
//     int sum=0;
//     bool hsh[100]={0};
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//         int rsb=a[i]&(-a[i]);
//         hsh[rsb]=true;
    
//     }
//     for(int i=0;i<100;i++){
//         if(hsh[i]==true) sum+=i;
//     }
//     cout<<sum<<endl;

    
// }
