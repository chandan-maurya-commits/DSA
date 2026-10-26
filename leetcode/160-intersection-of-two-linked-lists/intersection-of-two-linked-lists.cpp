/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//  Brute
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* temp1 = headA;
//         ListNode* temp2 = headB;
//         unordered_map<ListNode*, int> mp;

//         while(temp1 != nullptr){
//             mp[temp1]++;
//             temp1 = temp1->next;
//         }
//         while(temp2 != nullptr){
//             if(mp.find(temp2) != mp.end()){
//                 return temp2;

//             }
//             mp[temp2]++;
//             temp2 = temp2->next;
//         }
//         return nullptr;
//     }
// };

// Length based approach
// class Solution {
//     ListNode* collisionPoint(ListNode* t1, ListNode* t2, int d){
//         while(d){
//             d--;
//             t2 = t2->next;
//         }
//         while(t1 != t2){
//             t1 = t1->next;
//             t2 = t2->next;
//         }
//         return t1;
//     }
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* t1 = headA;
//         ListNode* t2 = headB;
//         int n1 = 0;
//         int n2 = 0;

//         while(t1 != nullptr){
//             n1++;
//             t1 = t1->next;
//         }
//         while(t2 != nullptr){
//             n2++;
//             t2 = t2->next;
//         }
//         t1 = headA;
//         t2 = headB;
//         if(n2 > n1){
//             return collisionPoint(t1, t2, n2-n1);
//         }else{
//             return collisionPoint(t2, t1, n1-n2);
//         }
//         return nullptr;
//     }
// };


// Optimal
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while(temp1 != temp2){
            

           
            if(temp1 == nullptr){
                temp1 = headB;
            }else{
                temp1 = temp1->next;
            }
            if(temp2 == nullptr){
                temp2 = headA;
            }else{
                 temp2 = temp2->next;
            }
            
           
            
        }
        return temp1;
    }
};



 