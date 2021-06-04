// Time complexity: O(n)
// space complexity: O(1)


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // counting sort approach
        
        int hash[3] = {0,0,0}; // 0 1 2
        
        for(int i=0; i<nums.size(); i++){
            
            hash[nums[i]]++;            
            
        }
        
        // eg  2 0 2 1 1 0
        //    0 1 2
        //    2 2 2
        
         int cnt = 0;
        
        for(int i=0; i<3; i++){
            
            while(hash[i]!=0){
                
                nums[cnt] = i;
                cnt++;
                
                hash[i]--;
            }
            
        }
        
        
    }
};
