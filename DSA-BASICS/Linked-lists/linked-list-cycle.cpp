 // problem link : https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/773/  
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        if(head == nullptr){
            return false;
        }
        
        while(fast->next != nullptr && fast->next->next != nullptr){
            
            //cout<<slow->val<<" "<<fast->val<<endl;
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return true;
            }
        }
        
        
        return false;
    }
};
