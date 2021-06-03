class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // one stock buy and sell - Easy leet code pblm 
        // we have inbuilt min and max fn in c++ STL
        
        // sol: buy on the min day and sell it on max day next to the min value
        
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for(int i=0; i<prices.size(); i++){
            
            min_price = min(prices[i],min_price);
            
            max_profit= max(max_profit, prices[i]-min_price);
            
        }
        
        return max_profit;
    }
};
