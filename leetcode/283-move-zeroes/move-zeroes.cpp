class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     vector<int> temp(nums.size());
        int idx=0;
     for(int i=0; i<nums.size(); i++){
        if(nums[i] != 0){
            temp[idx] = nums[i];
            idx++;
        }
     }
     for(int i=0; i<idx; i++){
        nums[i] = temp[i];
     }
     for(int i=idx; i<nums.size(); i++){
        nums[i] = 0;
     }

    }
};