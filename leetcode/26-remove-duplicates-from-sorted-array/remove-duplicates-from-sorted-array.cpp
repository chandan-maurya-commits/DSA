class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         set<int> st(nums.begin(), nums.end());
        
        int index =0;
        for(auto x : st){
            nums[index] = x;
            index++;
        }
        return index;
    }
};




