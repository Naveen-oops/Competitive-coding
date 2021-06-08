// Approach 1:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> mp;
        
        for(int i=0; i<nums.size(); i++){
            
            mp[nums[i]]++;
        }
          
        
        // ceil[n/2] => if n = 3  =>2 if n=7 => 4
        int x = ceil(nums.size()/2.0);
        int ans=0;
        
        for(auto itr = mp.begin(); itr!=mp.end(); itr++){
            
            if(itr->second >= x){
                cout<<itr->second<<" "<<x;
                ans = itr->first;
                break;
            }
        }
        
     return ans;   
    }
};
