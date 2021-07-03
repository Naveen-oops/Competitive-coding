# Partition Equal subset problem

##  Direct Variation of subsetsum problem

```c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int memo[102][10002];
    Solution(){
        memset(memo,-1, sizeof(memo));
        
    }
    int isSubsetSum(int arr[], int N, int sum){
        
        // Base cases
        if(sum>0 && N==0){
            return 0; // false
        }
        
        if(sum == 0){
            return 1; // true
        }
        
        //Memoization
        if(memo[N][sum]!=-1){
            return memo[N][sum];
        }
        
        
        // recursive cases
        
        if(arr[N-1]<=sum){
            
            return memo[N][sum] = isSubsetSum(arr, N-1, sum-arr[N-1]) || isSubsetSum(arr,N-1,sum);
        }
        else{
            // not pick
            return memo[N][sum] = isSubsetSum(arr, N-1, sum);
        }
        
    
    }



    int equalPartition(int N, int arr[])
    {
        // code 
        // variation Subset sum problem
        
        long long sum=0;
        
        for(int i=0; i<N; i++){
            sum += arr[i];
        }
        
       // cout<<sum<<endl;
        if(sum%2 !=0){
            return 0;
        }else{
           
            return isSubsetSum(arr,N,sum/2);
            
        }
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends
```
