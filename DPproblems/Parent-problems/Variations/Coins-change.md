# Coins change problems

## variation of unbounded knapsack problem

```c++

class Solution
{
  public:
  
  // m+1 n+1
  long long memo[1002][1002];
  
  Solution(){
      
      memset(memo, -1, sizeof(memo));
      
  }
  
    long long int count( int S[], int m, int n )
    {
        // n = cents[ similar to capacity] 
        //m = size of supply
        
        // Base cases
        // n=0 , m=0
        if(n==0){
            return 1;
        }
        
        if(m==0){
            return 0;
        }
    
        if(memo[m][n]!= -1){
            return memo[m][n];
        }
    
        // Recursive case
        if(S[m-1] <= n){
            
            return memo[m][n] = count(S, m, n-S[m-1])+ count(S, m-1, n);
            
        }else{
            // not pick
            
            return memo[m][n] = count(S, m-1, n);
            
        }
        
        
    }
};


```
