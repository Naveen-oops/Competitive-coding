  // Do a transpose and reverse row wise
  // Time complexity : O(N^2)
  // Space complexity : O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
     
        int m = matrix.size();
        int n = matrix[0].size();
        
        // transpose
        for(int i=0; i<m ; i++){
            
            for(int j=0 ; j<i ; j++){
                
                // swap a[i][j] with a[j][i]
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        
        // reverse each row => 2 pointer method
        
        for(int row=0; row<m; row++){
            
            for(int col=0; col<n/2 ; col++){
                
                swap(matrix[row][col], matrix[row][n-1-col]); // reverse
                
            }
        }
    }
};
