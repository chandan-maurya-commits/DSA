class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(), nums1.end());
        unordered_set<int> seen;
        vector<int> ans;

        for (int x : nums2) {
            if (st.count(x) && !seen.count(x)) {
                ans.push_back(x);
                seen.insert(x);
            }
        }

        return ans;
    }
};