// Approach 1 - sort the array and check for consecutive numbers
// Time complexity : O(nlogn) Space: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int ans=0;
        
        for(int i=1 ; i<nums.size(); i++){
            
            if(nums[i] == nums[i-1])
            {
                ans =  nums[i];
            }
        }
        
        
        return ans;
    }
};

// Approach 2 - we use hash array to store the count of nums , if freq of s num is = 2 we break and return
// Time complexity : O(n) Space: O(n)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> hash(n+1,0);
        int ans;
    
        
        for(int i=0; i<n; i++){
            
            hash[nums[i]]++;
            
            if(hash[nums[i]] == 2){
                ans = nums[i];
            }
        }
        
        return ans;
    }
};

// Approach 3 - Tortoise method or slow and fast pointer method
// Time complexity : O(n) Space: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
      // slow and fast pointer method or tortoise method
        
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            
            slow = nums[slow];
            fast = nums[nums[fast]];
    
        }while(slow!=fast);
        
        fast = nums[0];
        
        while(slow!=fast){
            
            slow = nums[slow];
            fast = nums[fast];
            
        }
        
        return slow;
        
    }
};
