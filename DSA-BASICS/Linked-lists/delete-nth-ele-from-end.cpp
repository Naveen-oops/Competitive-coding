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
        
        int length = 0;
        ListNode* ptr = head;
        
        while(ptr!=NULL){
            ptr = ptr->next;
            length++;
        }
        
        // target to delete
        int target = length - n;
        
        ptr = head;
        ListNode* follow = ptr;
        
        if(target == 0){
            head = head->next;
            return head;
        }
        
        ptr = ptr->next;
       // target--;
        
        //  follow ptr    target
        //   n-1    n        
        
        while(ptr!= NULL){
            
            target--;
            
            if(target == 0){
               
                //delete the node
                follow->next = ptr->next;
               // free(ptr);
                break;
            }
            
            follow = ptr;
            ptr = ptr->next;          
            
        }
            
        
        return head;
    }
};
