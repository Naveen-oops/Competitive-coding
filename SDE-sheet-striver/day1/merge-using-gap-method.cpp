// Time compleity:  O(m+n)
// Space complexity : O(1)

#include<bits/stdc++.h>

using namespace std;

// Function to find next gap.
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
 
void merge(int* arr1, int* arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap);
         gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}


 
int main(){

	int n1,n2;
	cin>>n1;
	cin>>n2;

	int arr1[n1];
	int arr2[n2];

	for(int i=0; i< n1; i++){
		cin>>arr1[i];
	}

	for(int i=0; i< n2; i++){
		cin>>arr2[i];
	}

	merge(arr1,arr2,n1,n2);

	for(int i=0; i< n1; i++){
		cout<<arr1[i]<<" ";
	}

	cout<<endl;

	for(int i=0; i< n2; i++){
		cout<<arr2[i]<<" ";
	}


	return 0;
}
