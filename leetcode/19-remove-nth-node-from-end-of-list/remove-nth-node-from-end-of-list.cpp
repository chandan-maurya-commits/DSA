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


// Brute
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if (head == nullptr) return nullptr;

//         int count = 0;
//         ListNode* temp = head;

//         while (temp != nullptr) {
//             ++count;
//             temp = temp->next;
//         }

//         if (count == n) {
//             ListNode* newHead = head->next;
//             delete head;
//             return newHead;
//         }

//         temp = head;
//         for (int i = 0; i < count - n - 1; ++i) {
//             temp = temp->next;
//         }

//         ListNode* deleteNode = temp->next;
//         temp->next = deleteNode->next;
//         delete deleteNode;

//         return head;
//     }
// };


//  Best
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