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


//  //BETTER USING (HASHING..)
 
// class Solution {
//  public:
//      int majorityElement(vector<int>& nums) {
//         int n= nums.size();
//         map<int, int> mp;
//         for(int i=0; i<nums.size(); i++){
//             mp[nums[i]]++;
//         }
//         for(auto x : mp){
//             if(x.second > n/2){
//                 return x.first;
//             }
//         }
//         return -1;
            
//         }
        
//  }; 

// BEST (MOOR'S VOTING ALGORITHEM)
class Solution {
 public:
     int majorityElement(vector<int>& nums) {
        int count =0;
        int ele = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                count++;
                ele = nums[i];
            }else if(nums[i] == ele){
                count++;
            }else{
                count--;
            }
        }
        int counter =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == ele){
                counter++;
            }
        }
        return (counter > nums.size()/2)? ele : -1;
            
        }
        
 }; 
