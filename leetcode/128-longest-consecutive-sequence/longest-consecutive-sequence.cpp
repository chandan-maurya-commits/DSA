
// Brute
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int maxCount = 0;
        

//        for(int i=0; i<nums.size(); i++){
//             int x= nums[i];
//             int count = 1;
//             while(true){
//                 bool found = false;
//                 for(int j=0; j<nums.size(); j++){
//                     if(nums[j] == x+1){
//                         x++;
//                         count++;
//                         found = true;
//                         break;
//                     }
//                 }
//                 if(found == false){
//                     break;
//                 }
//             }
//             maxCount = max(count, maxCount);
            
//        }
//        return maxCount;
            
//     }
// };


// Beter
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         if(nums.size() == 0){
//             return 0;
//         }
//         if(nums.size() == 1){
//             return 1;
//         }
//         sort(nums.begin(), nums.end());

//         int maxCount = 0;
//         int x = nums[0];
//         int count = 1;
//         for(int i=1; i<nums.size(); i++){
            
//             if(nums[i] == x+1 ){
//                 count++;
//                 x++;
//             }else if(nums[i] == x){

//             }else{
//                 count = 1;
//                 x = nums[i];
//             }
//             maxCount = max(count, maxCount);
//         }
//         return maxCount;
            
//     }
// };


// optimal 

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        int longest = 1;

        unordered_set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }

        for(auto x : st){
            if(st.find(x-1) == st.end()){
                int count =1;
                int first = x;

                while(st.find(x+1) != st.end()){
                    count++;
                    x++;
                }
             longest = max(longest, count);
            }
           

        }
        return longest;
    }
};

