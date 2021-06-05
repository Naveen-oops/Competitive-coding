//Approach 1 : store the row and col index of the zero element separately in a set respectively
// Time complexity : O(m X n)
// Space complexity : O(m+n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        // i , j : row , column
        // 0,0 : make row 0 =>zero and make col 0 =>zero
        // 0,3 : make col 3 => zero
        int m = matrix.size();
        int n = matrix[0].size();
        
        set<int> r,c;
            
        for(int i=0; i< m; i++){
            
            for(int j=0; j< n; j++){
                
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }
            }
            
        }
        
        
        
        //  If row or col set contains the corr row or col then mark as zero
        
        for(int i=0; i< m; i++){
            
            for(int j=0; j< n; j++){
              
                if(r.count(i) || c.count(j)){
                    matrix[i][j] = 0;
                }
            }
            
        }
        
    }
};
