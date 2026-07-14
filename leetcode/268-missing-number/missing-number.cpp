// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int sum=0;
//         // int total=n*(n+1)/2;
//         for(int num : nums){
//             sum += num;
//         }
//         return n*(n+1)/2 -sum;
//     }
// };



// better approach ..XOR method

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int ans =nums.size();
       
    
       for(int i=0; i<nums.size(); i++){
          ans ^= i;
          ans ^= nums[i];
       } 
       return ans;
    }
};
