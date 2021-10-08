#include<iostream.h>
#include<bits/stdc++.h>

using namespace std;
//partition along the last element
int partition(int arr[],int l,int r)
{
	int pivot=arr[r];

     int i=l-1;

for(int j=l;j<r;j++)
	{
          if(arr[j]<pivot)
          {
          	i++;
          	swap(arr[j],arr[i]);
          }
	}
	swap(arr[i+1],pivot);

	return i+1;
}
//dividing
void quickSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int pi=partition(arr,l,r);

		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);
	}
}
int main()
{
	int n;
	int t;
	cin >>t;
	while(t--)
	{
	    cin >>n;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 {
	 	cin >>arr[i];
	 }
	 quickSort(arr,0,n-1);
	}
}

//time complexity depend on pivot element
//best : when pivot is median  O(nlogn)
//worst: when pivot is last element (o(n2))


