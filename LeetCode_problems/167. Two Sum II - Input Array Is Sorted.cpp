



class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>hashtable;
        vector<int>v;
        for(int i=0;i<numbers.size();i++){
            int first=numbers[i];
            int second=target-first;
            if(hashtable.find(second)!=hashtable.end()){
                  v.push_back(hashtable[second]+1);
                v.push_back(i+1);
              
                
            }
       hashtable[first]=i;
        }
        return v;
        
    }
};







// __________________________________________________

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int>v;

        
//         int left=0;int right=numbers.size()-1;
//         while(left<right){
//             if(numbers[left]+numbers[right]>target) right--;
//             else if(numbers[left]+numbers[right]<target) left++;
//             else {
//                v.push_back(left+1);
//                v.push_back(right+1);
//                break;
//             }
//         }
//         return v;
//     }
// };





// __________________😒😒😒😒😒😒TLE😒😒😒😒😒😒__
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int>v;
//         for(int i=0;i<numbers.size()-1;i++){
//             for(int j=i+1;j<numbers.size();j++){
//                 if(numbers[i]+numbers[j]==target){
//                     v.push_back(i+1);
//                     v.push_back(j+1);
//                 }
//             }
//         }
//         return v;
        
//     }
// };
