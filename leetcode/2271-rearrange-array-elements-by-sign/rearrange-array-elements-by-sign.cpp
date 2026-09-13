// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n);

//         int pos = 0;
//         int neg = 1;

//         for(auto num : nums){
//             if(num > 0){
//                 ans[pos] = num;
//                 pos += 2;
//             }else{
//                 ans[neg] = num;
//                 neg += 2;
//             }
//         }
//         return ans;
//     }
// };


// Brute.
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        // int idx = 0;
        int p=0;
        int n=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2 == 0){
                nums[i] = pos[p];
                p++;
            }else{
                nums[i] = neg[n];
                n++;
            }
        }
        return nums;
        
    }
};
