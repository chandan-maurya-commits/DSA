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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        int middleNode = count/2 + 1;

        temp = head;
        while(temp  != nullptr){
            middleNode--;
            if(middleNode == 0) break;

            
            temp = temp->next;
        }
        return temp;
    }
};