// Better Approach :  Using DP hash array
// O(mXn)

class Solution {
public:
    
    int paths_dp(int i, int j,int m,int n,vector<vector<int>> &memo){
        
        // base condition
        if(i>=m or j>=n){
            return 0;
        }
        
        if(i==m-1 && j==n-1){
            return 1;
        }
        
        if(memo[i][j] != -1) return memo[i][j];
        
        return memo[i][j] = paths_dp(i+1,j,m,n,memo) + paths_dp(i,j+1,m,n,memo);
        
    }
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> memo;
        
        // initialize memo array as -1 
        
        for(int i=0; i<m; i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                temp.push_back(-1);
            }
            memo.push_back(temp);
        }
        
        // call the fun
        
        return paths_dp(0,0,m,n,memo);
    }
};



// Method 2: O(M-1)
// optimal app using combinatorics
    int paths_comb(int M, int N){
        
        int n = M+N-2;
        int r = M-1;
        double res =1;
        
        for(int i=1; i<=r; i++){
            
            res = res * (n-r+i)/i;
        }
        
        return (int)res;
    }
