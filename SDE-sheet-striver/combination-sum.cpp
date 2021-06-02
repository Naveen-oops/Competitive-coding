class Solution {
public:
    void listOfComb(int ind, int target, vector<vector<int>> &ans, vector<int> &canditates, vector<int> &ds){
        
        int n = canditates.size();
        // Base condition
        if(ind == n){
            
            if(target == 0){
                ans.push_back(ds);
            }
        return;
        }
        
        // main logic
        
        // picking an element
        if(canditates[ind] <= target ){
            
            ds.push_back(canditates[ind]);
            listOfComb(ind, target - canditates[ind] , ans, canditates, ds);
            ds.pop_back();
            
        }
        
        //not picking an element
        
        listOfComb(ind+1, target,ans, canditates, ds);
         
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        listOfComb(0,target,ans, candidates, ds);
        
        return ans;
        
    }
};
