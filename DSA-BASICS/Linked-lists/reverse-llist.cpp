// Approach: Reverse with the help of extra space(vectors, stacks ...)
// Time: O(n) Space : O(n)

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
    ListNode* reverseList(ListNode* head) {
        
        vector<ListNode *> arr;
        ListNode* ptr=head;
        
        if(head == NULL)
        {
            return head;
        }
        
        while(ptr->next != nullptr){
            
            arr.push_back(ptr);
            
            ptr = ptr->next;
        }
        
        // ptr points to last element
        head = ptr;
        
        for(int i=0; arr.size()!=0 ; i++){
           
            ptr->next = arr.back();
            arr.pop_back();
            
            ptr = ptr->next;
        }
        
        ptr->next = NULL;
        
        return head;
        
    }
};
