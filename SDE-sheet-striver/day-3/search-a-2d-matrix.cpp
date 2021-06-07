// Plain brute force approach
// Did on the go to correct code according to the code according testcases
// Time taken to slove : 35 minutes
// Time complexity : O(6n) effectively = > O(n)


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        // single element
        if(m==1 && n==1){
            
            if(target == matrix[0][0]){
                return true;
            }else{
                return false;
            }
        }
        
      
        // single row mult col case
        if(m==1 && n>1){
            
            for(int i=0; i < n; i++){
                    
                //cout<<matrix[0][i]<<" ";
                    if(matrix[0][i] == target){
                        return true;
                    }

            }
            
            return false;
        }
        
          // single row mult col case
        if(n==1 && m>1){
            
              for(int j=0; j < m; j++){

                    if(matrix[j][0] == target){
                        return true;
                    }
              }
            
            return false;
            
        }
            
        
        
        
            // O(n) approach
            // General case
            // 1. column check
            int r =-1;

            for(int i=0; i < matrix.size(); i++){

                if(matrix[i][0] > target){
                    r = i-1;
                    break;
                }
                else if(matrix[i][0] == target){
                    return true;
                }

            }

                 
            if(r<0){
                
                // CHECK FOR LAST ROW
                for(int i=0; i < n; i++){
                    
                //cout<<matrix[0][i]<<" ";
                    if(matrix[m-1][i] == target){
                        return true;
                    }

                }
                
                return false;
            }
        
            // Then our element may be in that i-1 th row
            // 2. i-1 th row check

            for(int j=0; j<matrix[0].size(); j++){

                if(matrix[r][j] == target){
                    return true;
                }

            }
        
        return false;
        
    }
};
