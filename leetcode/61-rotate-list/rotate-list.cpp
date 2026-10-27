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

     ListNode* findNewTail(ListNode* head, int count){
        ListNode* temp = head;
        count -= 1;
        while(count){
            --count;
            temp = temp->next;
        }
        return temp;
    }

   
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr) return head;

        ListNode* tail = head;
        int len = 1;
        while(tail->next != nullptr){
            len++;
            tail = tail->next;
        }
         k = k % len;
        if(k == 0) return head;
        tail->next = head;

        ListNode* newTail = findNewTail(head, len-k);
        head = newTail->next;
        newTail->next = nullptr;

         return head;

    }
   
};