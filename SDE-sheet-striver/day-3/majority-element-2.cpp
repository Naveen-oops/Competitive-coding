// 1. Brute force => Time complexity : O(n^2) 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> ans;
        
        int x = floor(nums.size()/3);
        
        int cnt=0;
       
        for(int i=0; i<nums.size(); i++){
            
            int key = nums[i];
            cnt = 0; 
            
            for(int j=i+1; j<nums.size(); j++){
                
                if(nums[j] == key){
                    cnt++;
                }
            
            }
            
            if(cnt >= x){
                ans.push_back(key);
            }
        }
        
        
        return ans;
    }
};

// Better approach : Hashing => O(nlogn) - space & time complexity

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> ans;
        
        // Hash map approach - Time complexity: O(nlogn)
        map<int,int> mp;
        
        int x = floor(nums.size()/3);
 
        // Put elements into the hash map
        for(int i=0; i<nums.size(); i++){
            
            mp[nums[i]]++;
        }
        
        // iterate and find
        for(auto itr=mp.begin(); itr!=mp.end(); itr++){
            
            if(itr->second >x){
                ans.push_back(itr->first);
            }
        }
        
       return ans;
    }
};



