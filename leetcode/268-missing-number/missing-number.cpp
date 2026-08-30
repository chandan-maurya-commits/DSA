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

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//        int ans =nums.size();
       
    
//        for(int i=0; i<nums.size(); i++){
//           ans ^= i;
//           ans ^= nums[i];
//        } 
//        return ans;
//     }
// };


// brute

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // if(nums.size() == 1) return 0;
        // if(nums[0] == 0) return 1;
       for(int i=0; i<=nums.size(); i++){
            int flag = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j] == i){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) return i;
       }
       return -1;
    }
};
