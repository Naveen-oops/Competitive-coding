class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // variation-2 Buy any no of stocks
        
        // Buy at min and sell at next maximum;
        // peak and valley approach
        
        int i = 0;
        int valley = prices[0];
        int peak = prices[0];
        int maxprofit = 0;
        
        
        
        while (i < prices.size() - 1 && i>=0) {
          
            while (i < prices.size() - 1 && prices[i] >= prices[i + 1])
                i++;
            
            valley = prices[i];
            
            while (i < prices.size() - 1 && prices[i] <= prices[i + 1])
                i++;
            
            peak = prices[i];
            maxprofit += peak - valley;
            
        }
        return maxprofit;

    }
};
