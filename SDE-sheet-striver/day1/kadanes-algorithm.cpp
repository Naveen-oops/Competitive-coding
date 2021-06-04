// kadanes algorithm ( Max sub array sum)
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // kadane's algorithm
        // keep the sum as long as it is postitive
        
        int max_sum = INT_MIN;
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            sum += nums[i];
            
            max_sum = max(max_sum, sum);
            
            if(sum<0){
                sum = 0;
            }
            
        }
        
        return max_sum;
    }
};
