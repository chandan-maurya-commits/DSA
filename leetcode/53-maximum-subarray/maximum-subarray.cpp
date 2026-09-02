// BRUTE gives TLE
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
      
    //   int maxSum = INT_MIN;
       
    //    for(int i=0; i<nums.size(); i++){
    //         for(int j=i; j<nums.size(); j++){
    //              int sum = 0;
    //             for(int k=i; k<=j; k++ ){
    //                 sum += nums[k];
                   
    //             }
    //              maxSum = max(sum, maxSum);
    //         }
    //    }
//        return maxSum;
//     }
// };

// BETTER gives TLE
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
      
      
//       int maxSum = INT_MIN;
       
//        for(int i=0; i<nums.size(); i++){
//          int sum = 0;
//             for(int j=i; j<nums.size(); j++){
                
//                 sum += nums[j];
//                 maxSum = max(sum, maxSum);
//             }
             
//        }
//              return maxSum;
//     }
// };


// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
      
      
//       int maxSum = INT_MIN;
       
//        for(int i=0; i<nums.size(); i++){
//          int sum = 0;
//             for(int j=i; j<nums.size(); j++){
                
//                 sum += nums[j];
//                 maxSum = max(sum, maxSum);
//             }
             
//        }
//              return maxSum;
//     }
// };


// OPTIMAL (KADANE'S ALGO..)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      
      
      int maxSum = INT_MIN;
      int sum = 0;
      for(int i=0; i<nums.size(); i++){
        sum += nums[i];

        maxSum = max(sum, maxSum);

        if(sum < 0){
            sum = 0;
        }
        
      }
      return maxSum;
    }
       
       
};
