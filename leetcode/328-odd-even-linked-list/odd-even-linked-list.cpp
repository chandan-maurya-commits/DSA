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

//  class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {

//      if(head == nullptr || head->next == nullptr) return head;

//        vector<int> nums;
//        ListNode* odd = head;
//        ListNode* even = head->next;

      
       

//        while(odd != nullptr ){
//             nums.push_back(odd->val);
//             if(odd->next == nullptr) break;
//             odd = odd->next->next;
//        }
//        while(even != nullptr ){
//             nums.push_back(even->val);
//             if(even->next == nullptr) break;
//             even = even->next->next;
//        }
//        ListNode* temp = head;

//        for(int i=0; i<nums.size(); i++){
//             temp->val = nums[i];
//             temp = temp->next;
//        }


//        return head;

          

//     }
// };



// Best 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* headEven = even;

        while(even != nullptr && even->next != nullptr){
            odd->next = even->next;
            odd = odd->next;


            even->next = odd->next;
            even = even->next;
        }
        odd->next = headEven;

        return head;

    }
};