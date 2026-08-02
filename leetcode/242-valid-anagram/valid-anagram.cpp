// sorting

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
        
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         return (s==t)? true:false;
//     }
// };

//   using frequency array
 class Solution {
 public:
     bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int> freq(26,0);
        for(char c:s){
            freq[c -'a']++;
        }
        for(char c : t){
            freq[c - 'a']--;
        }
        for(int count :freq){
            if(count != 0){
                return false;
            }
        }
        return true;
     }
};

// //   using hashmap
//  class Solution {
//  public:
//      bool isAnagram(string s, string t) {
//         if(s.size() != t.size()){
//             return false;
//         }
//         unordered_map<char,int> mp;

//         for(char c : s){
//             mp[c]++;
//         }
//         for(char c : t){
//             mp[c]--;
//             if(mp[c] <0){
//                 return false;
//             }
//         }
//         return true;
         
//      }
//  };
