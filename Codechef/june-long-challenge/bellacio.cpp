// 1. Skill to deduce formula for given sum without the use of loops
// Easy level problem
// Time taken: 40 minutes
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	// Bella ciao
	// D d P Q
	// d - unit of splitting days
	// P -initial rate
	// after nd days => P + nQ

	long long t;
	cin>>t;

	while(t--){

		long long D,d,P,Q;
		cin>>D>>d>>P>>Q;

		long long n = D/d, rem = D%d , res = 0;

		res = (d) * (n*P + ((n-1)*n*Q)/2) ;

		res += (D % d)*(P + n*Q);
		
		cout<<res<<endl;

	}
    
	return 0;
}
