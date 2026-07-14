// Brute Approach.
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxWater = 0;
//         int n = height.size();

//         for(int i=0; i<n ; i++){
//             for(int j=i+1; j<n; j++){
//                 int width = j-i;
//                 int ht = min(height[i], height[j]);
//                 int area = ht * width;
//                 maxWater = max(maxWater, area);
//             }
//         }
//         return maxWater;
//     }
// };


// Optimal Two pointer Approach.
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right= height.size()-1;
        int ans =0;
        while(left < right){
            int area = min(height[left], height[right])*(right-left);
            ans = max(ans, area);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};
