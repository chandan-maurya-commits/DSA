class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int i=0;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                nums[i+1]=nums[j];
                i++;
                count++;
            }
        }
        return count;
    }
};