// Approach1 : Recursive
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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        
        ListNode* result = NULL;  
      
    /* Base cases */
    if (a == NULL)  
        return(b);  
    else if (b == NULL)  
        return(a);  
      
    /* Pick either a or b, and recur */
    if (a->val <= b->val)  
    {  
        result = a;  
        result->next = mergeTwoLists(a->next, b);  
    }  
    else
    {  
        result = b;  
        result->next = mergeTwoLists(a, b->next);  
    }  
    return(result);  
    }
    
};


// Approach 2: Iterative

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
         ListNode head(INT_MIN);
        ListNode *tail = &head;
        
        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        tail->next = l1 ? l1 : l2;
        return head.next;
    }
};

