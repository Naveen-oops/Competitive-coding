// Binary exponentiation
class Solution {
public:
    //double MOD = 1000000007.00;
    
    double binexp(double base, long long n){

	//initialize ans as 1;
	double ans = 1;

	while(n>0){

	if(n%2==1){
		ans = (ans*base);//%MOD;
	}

	base = (base*base);//%MOD;

	n= n>>1;

	}

	return ans;
        
    }
    
    double myPow(double x, int n) {
        
        long long nvalue = (n>=0? n: -1*1LL*n);
        
       double ans = binexp(x,nvalue);
        
        if(n>=0){
            return ans;
        }
        else{
            return 1/ans;
        }
        
        
    }
};
