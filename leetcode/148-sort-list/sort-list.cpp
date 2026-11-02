/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> nums;
        
        int i = 0;

        for(ListNode* temp = head; temp != nullptr; temp = temp->next){
            nums.push_back(temp->val);
            
        }
        sort(nums.begin(), nums.end());
        ListNode* temp = head;

        for(int num : nums){
            temp->val = num;
            temp = temp->next;
        }

    return head;
    }
};