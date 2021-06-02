// POWER SET USING BIT MANIPULATION

vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n = s.size(); // string length
		    // Bit manipulation
		    
		    vector<string> ans;
		    
		    for(int num=0 ; num < (1<<n); num++){
		            
		            string sub ="";
		            
		            for(int ind=0; ind<=n; ind++ ){
		                
		                if(num & (1<<ind)){
		                    sub += s[ind];
		                }
		                
		            }
		            
		            if(sub.size()!=0){
		            ans.push_back(sub);}
		        
		    }
		    
		    return ans;
		    
		}
