#include<bits/stdc++.h>

using namespace std;

int main(){

    // young physicist
	//  logic:  sum of total force is zero(equilbrium)
	// Ex =0 Ey =0 Ez=0

	int t;
	cin>>t;

	int x,y,z;
	long long Ex,Ey,Ez;
	Ex=0;
	Ey=0;
	Ez=0;

	while(t--){

			cin>>x;
			cin>>y;
			cin>>z;
			Ex+=x;
			Ey+=y;
			Ez+=z;

	}

	//cout<<Ex<<" "<<Ey<<" "<<Ez<<endl;
	if((Ex==0 && Ey==0 && Ez==0)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}


		
	return 0;
}
