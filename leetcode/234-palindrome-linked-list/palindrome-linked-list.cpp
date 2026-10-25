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

//  Brute
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode* temp = head;
//         stack<int> st;

//         while(temp != nullptr){
//             st.push(temp->val);
//             temp = temp->next;
//         }
//         temp = head;
//         while(temp != nullptr){
//             if(temp->val != st.top()) return false;

//             temp = temp->next;
//             st.pop();
//         }
//         return true;

//     }
// };


class Solution {
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;

        while (temp != nullptr) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHead = reverse(slow->next);
        ListNode* first = head;
        ListNode* second = secondHead;

        bool palindrome = true;
        while (second != nullptr) {
            if (first->val != second->val) {
                palindrome = false;
                break;
            }
            first = first->next;
            second = second->next;
        }

        
        slow->next = reverse(secondHead);

        return palindrome;
    }
};