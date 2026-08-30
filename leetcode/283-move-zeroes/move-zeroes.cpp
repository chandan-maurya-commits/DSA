// brute
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//      vector<int> temp(nums.size());
//         int idx=0;
//      for(int i=0; i<nums.size(); i++){
//         if(nums[i] != 0){
//             temp[idx] = nums[i];
//             idx++;
//         }
//      }
//      for(int i=0; i<idx; i++){
//         nums[i] = temp[i];
//      }
//      for(int i=idx; i<nums.size(); i++){
//         nums[i] = 0;
//      }

//     }
// };


// optimal

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int i=0;
    
     
    for(int j=0; j<nums.size(); j++ ){
        if(nums[j] != 0){
            swap(nums[i], nums[j]);
            i++;
        }
    }

    }
};
