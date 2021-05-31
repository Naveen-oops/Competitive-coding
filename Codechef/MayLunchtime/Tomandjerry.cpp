#include<bits/stdc++.h>

using namespace std;

long long int abs(long long int a, long long int b){
	return (a>b? a-b: b-a);
}

long long int isEven(long long int a){
	return (a%2==0? 1:0);
}

int main(){


	long long t;
	cin>>t;

	while(t--){

		// a>b c>d

		long long a,b,c,d,k;

		cin>>a>>b>>c>>d>>k;

		long long int diff = abs(a,c)+abs(b,d); // minimum steps required
		//cout<<diff;
		

		if(diff==k && diff!=0){ // same distance
			cout<<"YES";
		}
		else if(a==c){ // same row 
			long long int x = abs(b,d);

			if(x>k){
				cout<<"NO";
			}else{

				if((isEven(k)&&isEven(x))||(!isEven(k)&&!isEven(x))){ // O O E E
					cout<<"YES";
				}else{
					cout<<"NO";
				}

			}
			
		}
		else if(b==d){ // same column
			long long int y = abs(a,c);

			if(y>k){
				cout<<"NO";
			}else{

				if((isEven(k)&&isEven(y))||(!isEven(k)&&!isEven(y))){ // O O E E
					cout<<"YES";
				}else{
					cout<<"NO";
				}			
			
				}
		}
		else{ // In different row and column (k<diff)

			if(diff>k)
			{
				cout<<"NO";
			}
			else{
				if((isEven(k)&&isEven(diff))||(!isEven(k)&&!isEven(diff))){ // O O E E
					cout<<"YES";
				}else{
					cout<<"NO";
				}

			}

		}

		cout<<endl;
	}

	return 0;
}
