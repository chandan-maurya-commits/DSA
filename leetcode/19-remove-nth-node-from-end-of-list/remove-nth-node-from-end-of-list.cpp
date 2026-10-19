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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* fast = head;
            ListNode* slow = head;

             
         for(int i=0; i<n; i++){
            fast = fast->next;

         }
         if(fast == nullptr){
            ListNode* dltHead = head;
            head = head->next;
            delete dltHead;
            return head; 
         }
         while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
         }
        ListNode* dltNode = slow->next;
        slow->next = slow->next->next;
        delete dltNode;

        return head;


    }
};