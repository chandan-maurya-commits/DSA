class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int prefix_sum = 0;
        int count = 0;

        for(int num : nums){
            prefix_sum += num;
            if(mp.find(prefix_sum - k) != mp.end()){
                count += mp[prefix_sum - k];
            }
            mp[prefix_sum]++;
        }
        return count;
    }
};