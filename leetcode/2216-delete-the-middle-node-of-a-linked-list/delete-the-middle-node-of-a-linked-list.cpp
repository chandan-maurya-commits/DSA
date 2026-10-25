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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }

        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        
        int middleNode = count/2;
        temp = head;
        while(temp != nullptr){
            middleNode--;
            if(middleNode == 0){
                ListNode* dlt = temp->next;
                temp->next = temp->next->next;
                delete dlt;
            }
            temp = temp->next;
        }
        

        return head;
    }
};