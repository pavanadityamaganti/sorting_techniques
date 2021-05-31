#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],flag=0;
	cout<<"enter the length of the array :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				flag=1;
			}
		}
	}
	if(flag==1)
	{
		cout<<"not in sorted order";
	}
	else
	{
		cout<<"sorted order";
	}
	return 0;
}
