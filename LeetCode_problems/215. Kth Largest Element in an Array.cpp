


// _____________________________________________________________________________________________



// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
     
//   priority_queue<int, vector<int>, greater<int>> minheap;
//     for(auto x:nums) minheap.push(x);
//     int s=nums.size();
//     while(s>k) {
//         minheap.pop();
//             s--;}
//     int ans=minheap.top();
//     return ans;


        
//     }
// };



// __________________________________________________________________

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//          sort(nums.begin(),nums.end(),greater<int>());
//     return nums[k-1];


        
//     }
// };




// ____________________________________________________________________



// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//          sort(nums.begin(),nums.end());
//     int n=nums.size();
//     int x=nums[n-k];
//     return x;


        
//     }
// };
