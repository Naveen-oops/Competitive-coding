#include<bits/stdc++.h>

using namespace std;

int abs(int a, int b){

	return (a>b? a-b: b-a);
}
int main(){

    // Beautiful matrix
    // Logic is:
    // Absolute diff between sum of corresponding coordinates of (x,y) and (3,3)

	int mat[6][6];
	int x,y;

	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin>>mat[i][j];

			if(mat[i][j]==1){
				x = i;
				y=j;
			}
		}
	}

	// (x,y) and (3,3) absolute diff

	int mindist = abs(x,3) + abs(y,3);

	cout<<mindist;


	return 0;
}
