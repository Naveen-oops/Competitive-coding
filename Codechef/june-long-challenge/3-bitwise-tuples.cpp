// 1.Need to learn Binary Exponentiation
// 2. Need to have a skill to deduce the pattern and genralize the formulae
// Binary exponentiation link : https://www.youtube.com/watch?v=FOiEGMo5iaM&list=PLEvw47Ps6OBCwgmsyZ2AZsFEIYCHqlD4W
// Medium level pblm 
// Time taken : 1:30 hrs

#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long binexp(long long base, long n){

	//initialize ans as 1;
	long long ans = 1;

	while(n>0){

	if(n%2==1){
		ans = (ans*base)%MOD;
	}

	base = (base*base)%MOD;

	n= n>>1;

	}

	return ans;
}

int main(){
	
	// N M
	// Bit wise tuples

	long long t;
	cin>>t;

	while(t--){
		
		long long N,M;
		cin>>N>>M;
		
		// ans  (2 ^ M*N/2  -1)^2 wrong
		// ans (2^N -1)^M % MOD correct
		// N = 10^5
		// M 10^6


		long long res=1;
		
		res = binexp(2,N);
		res = res-1;		
		res = binexp(res,M);

		cout<<res<<endl;
		
	}
    
	return 0;
}
