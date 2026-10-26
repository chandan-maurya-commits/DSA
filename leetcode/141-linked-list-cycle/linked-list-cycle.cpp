/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, int> mp;

        if(temp == nullptr || temp->next == nullptr ) return false;

        while(temp != nullptr ){
            if(mp.find(temp) != mp.end()){
                return true;
                break;

            }
            mp[temp] = 1;
            temp = temp->next;
        }
        return false;
    }
};