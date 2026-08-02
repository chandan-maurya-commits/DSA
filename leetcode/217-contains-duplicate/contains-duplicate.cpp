// using unordered set 
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> st;

//         for(int num : nums){
//             if(st.find(num) != st.end()){
//                 return true;
//             }
//             st.insert(num);
//         }
//         return false;
//     }
// };


// using unordered set based on size

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        if(nums.size() > st.size()){
            return true;
        }
        return false;
    }
};

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> st;

//         for(int num : nums){
//             if(st.find(num) != st.end()){
//                 return true;
//             }
//             st.insert(num);
//         }
//         return false;
//     }
// };