// Better approach
// Time: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        
       // store the value and its index in the hash table
        map<int,int> mp;
        // num , index
        
        for(int i=0; i<nums.size(); i++){
            
            int x = target - nums[i]; // complement
            
            if(mp.count(x)){
                ans.push_back(mp[x]);
                ans.push_back(i);
                break;
            }
            
            mp[nums[i]] = i;
            
        }

        return ans;
    }
};


