// hashing approach 
// Time complexity : O(n)
// Space complexit : O(n)

#include<bits/stdc++.h>

using namespace std;

 void findTwoElement(int *arr, int n) {

        // code here
        int ans[2] = {0,0};
        int hash[n+2]={0};
        
        for(int i=0; i<n; i++){
            
            hash[arr[i]] += 1;
        }
        
        for(int i=1; i<=n; i++){
            
            if(hash[i]==2){
                // repeating
                ans[0] = i;
            }
            
            if(hash[i]==0){
                // missing
                ans[1] = i;
            }
        }

        cout<<ans[0]<<" "<<ans[1];
      
    }


int main(){

	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i< n; i++){
		cin>>arr[i];
	}

	findTwoElement(arr,n);

	return 0;
}
