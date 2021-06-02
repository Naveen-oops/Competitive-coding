#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	// Queue at the school
	// 5 1 (n t)
	// BGGBG
	// op/   GBGGB
 
	int n,t;
	string s;
 
	cin>>n>>t;
	cin>>s;
 
	for(int j=0; j<t; j++){
			for(int i=0; i<s.size()-1; i++){
 
				if(s[i]=='B' && s[i+1]=='G'){
 
					char temp = s[i+1];
					s[i+1] = s[i];
					s[i] = temp;
 
					i++;
				}
			}
	}
 
	cout<<s;
 
 
 
	return 0;
}
