// Hashing 
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	//char ch[150];
	int freq[150] = {0};

	string s;
	getline(cin,s);

	int n = s.size();

	int maxfreq = 0;
	char minchar='\0';

	for(int i=0; i<n;i++){

		freq[s[i]]++;

		if(freq[s[i]] > maxfreq){
			maxfreq = freq[s[i]];
			minchar = s[i];
		}else if(maxfreq==freq[s[i]] && s[i] < minchar){

			minchar = s[i];
		}
	}

	cout<<minchar<<" "<<maxfreq;
	
	
}


