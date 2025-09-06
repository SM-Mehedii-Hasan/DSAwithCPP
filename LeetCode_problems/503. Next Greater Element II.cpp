// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//          int n=nums.size();
//     vector<int>result(n,-1);
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//             if(nums[(i+j)%n]>nums[i]) {
//                 result[i]=nums[(i+j)%n];
//             break;}
       
//         }
//     }
//     return result;
        
//     }
// };


// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//          int n = nums.size();
//     vector<int> nge(n, -1);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j =i+1; j < 2 * n; j++)
//         {
//             int next = j % n;
//             if (nums[i] < nums[next])
//             {
//                 nge[i] = nums[next];
//                 break;
//             }
//         }
//     }
//     return nge;
        
//     }
// };



class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n=nums.size();
    vector<int>nge(n,-1);
    stack<int>s;
    for(int i=2*n-1;i>=0;i--){
        int j=i%n;
        while(!s.empty()&&s.top()<=nums[j]) s.pop();
        if(!s.empty() ) nge[j]=s.top();
        s.push(nums[j]);

    }
    return nge;
        
    }
};
