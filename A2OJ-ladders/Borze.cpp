#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	//Borze number
	// 0  .
	// 1  -.
	// 2 --
 
	string borze;
 
	cin>>borze;
 
	for(int i=0; borze[i]!='\0'; i++){
 
		//cout<<borze[i];
 
		if(borze[i] == '.'){
			cout<<0;
		}
		else if(borze[i] == '-' && borze[i+1]=='.'){
			cout<<1;
			i++;
		}
		else if(borze[i] == '-' && borze[i+1]== '-'){
			cout<<2;
			i++;	
		}
	}
 
 
	return 0;
}
