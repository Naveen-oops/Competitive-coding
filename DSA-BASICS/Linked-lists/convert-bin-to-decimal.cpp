// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int getDecimalValue(ListNode* head) {
     
            ListNode* ptr = head;
            int len = 0;
        
            while(ptr!= nullptr){
                len++;
                ptr = ptr->next;
            }
            
            cout<<len<<endl;
        
            int ans = 0;
        
            int i = len-1;
            ptr = head;
        
            while(i>=0){
                
               // cout<<ptr->val<<" ";
               // cout<<(1<<i)<<" ";
                ans = ans + (ptr->val)*(1<<i);
                
                i--;
                ptr = ptr->next;
                
            }
        
        
        return ans;
    }
};
