
class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int count=0;
        unordered_map<int,int>m;
        int prefixsum=0;
        m[0]=1;
        for(auto x:arr){
            prefixsum+=x;
            if(m.count(prefixsum)) {
                count+=m[prefixsum];
            }
            m[prefixsum]++;
            
        }
        return count;
        
        
    }
};


// class Solution {
//   public:
//     int findSubarray(vector<int> &arr) {
//         int  count=0;
//         for(int i=0;i<arr.size();i++){
//             int sum=0;
//             for(int j=i;j<arr.size();j++){
//                 sum+=arr[j];
//                 if(sum==0) count++;
           
//             }
//         }
//         return count;
//     }
// };


// class Solution {
//   public:
//     int findSubarray(vector<int> &arr) {
//         int  count=0;
//         for(int i=0;i<arr.size();i++){
//             for(int j=i;j<arr.size();j++){
//                 int sum=0;
//                 for(int k=i;k<=j;k++) sum+=arr[k];
//                 if(sum==0) count++;
//             }
//         }
//         return count;
//     }
// };
