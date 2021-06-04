#include<bits/stdc++.h>

using namespace std;

//Function to merge the arrays.
void merge(int a[], int b[], int m, int n)
{ 
    //code here

	for(int i=0; i<m ; i++){

		if(a[i]> b[0]){
			// swap

			int temp = b[0];
			b[0] = a[i];
			a[i] = temp;

		// now insert the b[0] in its correct place by INSERTION sort

				int x = b[0];
				int j = 1;

				//cout<<x<<" "<<endl;

				while(j<n && b[j]<x){

					b[j-1] = b[j];
					//break;
					j++;
				}
				b[j-1] = x;

			}

		} 
    
}


int main(){

	int m,n;
	cin>>m;
	cin>>n;

	int arr1[m];
	int arr2[n];

	for(int i=0; i< m; i++){
		cin>>arr1[i];
	}

	for(int i=0; i< n; i++){
		cin>>arr2[i];
	}

	merge(arr1,arr2,m,n);

	for(int i=0; i< m; i++){
		cout<<arr1[i]<<" ";
	}

	cout<<endl;

	for(int i=0; i< n; i++){
		cout<<arr2[i]<<" ";
	}


	return 0;
}
