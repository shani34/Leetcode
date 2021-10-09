#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	 cin>>n;

   int a[n];
	 for(int i=0;i<n;i++)
	 	cin >>a[i];

	 int counter=1;

	 while(counter<n)
	 {
	 	for(int i=0;i<n-counter;i++)//n-i swaps; at each iterationn we do swaping of adjacent element
	 	{
	 		if(a[i]>a[i+1])
	 			swap(a[i],a[i+1]);
	 	}
	 	counter++;
	 }

}