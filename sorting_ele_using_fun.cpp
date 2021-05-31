#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"enter the length of the array :";
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    sort(arr,arr+n);
    cout<<"element's after sorting are :";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}
