#include<iostream.h>
#include<bits/stdc++.h>

using namespace std;
void merge(int arr,int l,int mid,int r)
{
	int n1=mid-l+1;
	int n2=r-mid;

	int a[n1];
	int b[n2];
	for(int i=0;i<n1;i++)
		a[i]=arr[l+i];
	for(int i=0;i<n1;i++)
		b[i]=arr[mid+i+1];

int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k++]=a[i++];
		}else
		{
			arr[k++]=b[j++];
		}
	}
while(i<n1)
{
	arr[k++]=a[i++];
}
while(j<n2)
{
	arr[k++]=b[j++];
}

}
void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
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
       mergeSort(arr,0,n-1);
	}
}

T(n)=2T(n/2)+n;

TC:O(nlogn)
SC:O(n);
//stable sorting relative order is
k=logn;
 