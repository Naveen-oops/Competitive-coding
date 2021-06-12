class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        map<int,int> mp;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            
            mp[nums[i]]++;
        }
        
        int cnt = 1 ;
        int max_cnt = 0;
        
        auto itr = mp.begin();
        auto itr2 =itr;
        
        for(itr = mp.begin(); itr!=mp.end();){
           
            
            itr2 = itr++;
         
           // cout<<itr2->first<<" "<<itr->first<<endl;
            
            if( (itr->first) - (itr2->first) ==1 ){
                
                if(itr != mp.end()){
                cnt++;
                }
            }else{
                cnt = 1;
            }
            
            
            if(cnt>max_cnt){
                max_cnt = cnt;
            }   
               
            
        }
        
        
        return max_cnt;
        
        
    }
};
