# SUBSET SUM PROBLEM

##  Variation of 0/1 knapsack problem

```c++
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int memo[102][10002];
    // N sum
    
    Solution(){
        
        memset(memo, -1, sizeof(memo));
        
    }
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        
        if(sum>0 && N==0){ return false;}
        
        if(sum==0){ return true;}
        
        // if(sum<0){return false;}
        
        if(memo[N][sum]!=-1){
            return memo[N][sum];
        }
        
        
        if(arr[N-1]<=sum){
            bool x = isSubsetSum(N-1, arr, sum-arr[N-1]) || isSubsetSum(N-1, arr,sum) ;
           
            if(x){ memo[N][sum] = 1 ; }else{ memo[N][sum] = 0 ;}
           
            return x;
            
        }else{
            // dont pick
            bool y = isSubsetSum(N-1,arr,sum);
            
            if(y){ memo[N][sum] = 1 ; }else{ memo[N][sum] = 0 ;}
            
            return y;
            
        }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends

```
