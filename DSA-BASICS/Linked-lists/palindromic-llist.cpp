// Link : https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/772/
//  Approach -1
//Time : O(n) Space: O(n) 
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
    bool isPalindrome(ListNode* head) {
        
        vector<int> arr;
        
        ListNode* ptr = head;
        
        while(ptr->next != nullptr){
            
            arr.push_back(ptr->val);
            ptr = ptr->next;
        }
        arr.push_back(ptr->val);

        // checking array;
        int start = 0;
        int end = arr.size();
        
        while(start < end){
            
            //cout<<arr[start]<<" "<<arr[end-1]<<endl;
            
            if(arr[start] != arr[end-1]){
                return false;
            }
    
            start++;
            end--;
            
        }
        
        
        return true;
    }
};
