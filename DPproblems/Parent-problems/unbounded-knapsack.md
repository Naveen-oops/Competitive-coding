# Unbounded Knapsack problem


```c++

class Solution{
public:
    int memo[1002][1002];
   
    Solution(){
        
        memset(memo,-1, sizeof(memo));
        
    }
   
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        if(N==0 || W==0){
            return 0;
        }
        
        // recursive case
        if(memo[N][W] != -1){
            return memo[N][W];
        }
        
        if(wt[N-1]<=W){
            
            return memo[N][W]= max(
                val[N-1] + knapSack(N, W-wt[N-1], val, wt),
                knapSack(N-1, W, val, wt)
                );
            
        }else{
            
            return memo[N][W] = knapSack(N-1, W, val, wt);
            
        }
        
        
    }
};



```
