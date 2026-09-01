// // BRUTE
// class Solution {
//  public:
//      int majorityElement(vector<int>& nums) {
        
//          for(int i=0; i<nums.size(); i++){
//             int count = 0;
//             for(int j=0; j<nums.size(); j++){
//                 if(nums[j] == nums[i]){
//                     count++;
//                 }
//                 if(count > nums.size()/2){
//                     return nums[i];
                    
//                 }
//             }
//          }   
//          return -1;
         
//     }
//  };


 //BETTER
 // BRUTE
class Solution {
 public:
     int majorityElement(vector<int>& nums) {
        int n= nums.size();
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto x : mp){
            if(x.second > n/2){
                return x.first;
            }
        }
        return -1;
            
        }
        
 }; 


//moore's voting algo. most Optimized.
// class Solution {
//  public:
//      int majorityElement(vector<int>& nums) {
//         int n =nums.size();
//         int freq=0, ans=0;

//         for(int i=0; i<n; i++){
//             if(freq == 0){
//                 ans =nums[i];
//             }if(ans == nums[i]){
//                 freq++;
//             }else{
//                 freq--;
//             }
//         }
//         return ans;
         
//     }
//  };