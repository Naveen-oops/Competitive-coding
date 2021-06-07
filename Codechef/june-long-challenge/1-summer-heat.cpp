// Beginner level
// Time taken : 15 min

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	// SUMMER HEAT
	// Xa/ xa    Xb/xb

	long long t;
	cin>>t;

	while(t--){

		long long  a,b,A,B;
		cin>>a>>b>>A>>B;

		long long res = A/a + B/b ;

		cout<<res<<endl;
	}

    
	return 0;
}
