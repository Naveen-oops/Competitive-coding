// 1. Naive approach
// eg  1 3 1 2
// we buy stock at valleys and sell at peaks

long stockmax(vector<int> prices) {
  
long profit = 0;


for(int i=0; i<prices.size(); i++){
   
    int peaks=0;
    for(int j=i; j<prices.size();j++){
        
        if(prices[j]>peaks){
            peaks = prices[j];
        }
    }
    
    // buy the stock and sell it at the peak 
    
    profit += peaks - prices[i];
    
}

return profit;
  
 
// 2.Dynamic programming approach
// Why DP?
// In previous approach  consider eg., 1 100 3 4 6 1 9 10
// eventhough 100 is the peak value we are checking for it every time (Repeating sub prob)
// so instead we use memoization
// solution:
// keep track of the peak and if only needed go to update the peek &
 // It will be easy if we iterate backwards the array
  
  long stockmax(vector<int> prices) {

    int n=prices.size();
    long profit=0;
    int peak=0;
    
    for(int i=n-1; i>=0; i--){
        
        // update the peak
        if(prices[i] > peak){
            peak = prices[i];
        }
        
        // sell the stock 
        profit += peak - prices[i];
        
    }
    
    return profit;

}
  
