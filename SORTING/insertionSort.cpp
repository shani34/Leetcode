#include <bits/stdc++.h>

using namespace std;

//start from second element then do the shifting of elements to the right position

int main()
{
	/* code */
	int n;
	cin >>n;
	int a[n];

	for(int i=0;i<n;i++)
		cin >>a[i];

	for(int i=1;i<n;i++)    //starting fromt the second element
	{
		int current=a[i];
        int j=i-1;
        while(current<a[j] && j>=0)   //positioning the right position in array
        {
        	a[j+1]=a[j];
        	j--;
        }

        a[j+1]=current;   //assigning the element
	}

	//print the array;
	return 0;
}
//best case O(n) swaps O(1)
//worst case o(n^2) swap(n2)

//stable sorting 
//in place 