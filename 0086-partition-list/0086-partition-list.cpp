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
    ListNode* partition(ListNode* head, int x) {
         ListNode* temp = head  ; 
    
    ListNode* left = new ListNode(0);
    ListNode* right = new ListNode(0) ; 
    ListNode* dummy1 = left  ;
    ListNode* dummy2 = right ; 
    while(temp!=NULL){
        if(temp->val < x){
            dummy1->next = temp ; 
            dummy1 = dummy1->next ; 
         }
        else {
            dummy2->next = temp ; 
            dummy2 = dummy2->next ; 
            
        }
        temp = temp->next ; 
    }
    dummy1->next = right->next ; 
    dummy2->next = NULL;
    
    return left->next ; 
    }
};