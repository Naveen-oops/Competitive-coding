# Count of subsetsum with the given sum

## Direct variation of subset sum problem

### Hint : just change || to + and here in addition handle the overflow by % 10^9+7

```c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int memo[1002][1002];
	const unsigned int M = 1000000007;
	
    Solution(){
        memset(memo,-1, sizeof(memo));
        
    }
    int perfectSum(int arr[], int N, int sum){
        
        // Base cases
        if(sum>0 && N==0){
            return 0; // false
        }
        
        if(sum == 0){
            return 1; // true
        }
        
        //Memoization
        if(memo[N][sum]!=-1){
            return memo[N][sum]%M;
        }
        
        
        // recursive cases
        
        if(arr[N-1]<=sum){
            
            return memo[N][sum] = (perfectSum(arr, N-1, sum-arr[N-1])%M + perfectSum(arr,N-1,sum)%M )%M;
        }
        else{
            // not pick
            return memo[N][sum] = perfectSum(arr, N-1, sum)%M;
        }
        
    
    }
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends
```
