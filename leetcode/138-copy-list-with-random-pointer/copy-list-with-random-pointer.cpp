/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {

//         unordered_map<Node*, Node*> mp;

//         Node* temp = head;

//         while(temp != nullptr){
//             mp[temp] = new Node(temp->val);
//             temp = temp->next;
//         }
//         temp = head;
//         while(temp != nullptr){
//             mp[temp]->next = mp[temp->next];
//             mp[temp]->random = mp[temp->random];

//             temp = temp->next;
//         }
//         return mp[head];

//     }
// };

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node dummy(-1);
        Node* tail = &dummy;
        Node* temp = head;

        while(temp != nullptr){
            tail->next = new Node(temp->val);
            tail = tail->next;
            temp = temp->next;

        }
        Node* copyHead = dummy.next;

        Node* original = head;
        Node* copy = copyHead;

        while(original != nullptr){
            if(original->random == nullptr){
                copy->random = nullptr; 
            }else{
                Node* target = head;
                Node* copyTarget = copyHead;
                while(target != original->random){
                    target = target->next;
                    copyTarget = copyTarget->next;
                }
                copy->random = copyTarget;



            }
            copy = copy->next;
            original = original->next;
        }
        return copyHead;

        

    }
};