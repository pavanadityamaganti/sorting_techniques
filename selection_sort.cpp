#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],r;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=4;i++)
	{
		if(arr[0]>arr[i])
		{
			r=i;
		}
		swap(arr[r],arr[0]);
	} 
	for(int k=1;k<=4;k++)
	{
		for(int i=k+1;i<=4;i++)
		{
			if(arr[k]>arr[i])
			{
				swap(arr[k],arr[i]);
			}
		}
	}
	for(int i=0;i<=4;i++)
	{
		cout<<arr[i];
	}
}
