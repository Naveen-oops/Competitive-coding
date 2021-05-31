class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        multiset<int> set;
        
        for(int i=0; i<nums.size(); i++){
            set.insert(nums[i]);
        }
        
        
        // iterate the multiset
        int diff=0;
        int maxdiff=0;
        
        multiset<int>::iterator it1;
        
        for(auto it = set.begin(); it1!=set.end() ; it++){
            
            it1 = it;
            it1++;
            
            // cout<<*it<<" ";
            // cout<<*it1<<" "<<endl;
            
            if(it1!=set.end()) {
                
                diff = *(it1) - *(it);
               // cout<<diff<<" ";
            }
            
            if(diff > maxdiff){
                maxdiff = diff;
            }
            
        }
        
        
        return maxdiff;
        
    }
};
