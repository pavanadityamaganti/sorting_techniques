#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"enter the length of the array :";
	cin>>n;//                       5
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];//              2,9,1,8,3
	}
	if(arr[0]>arr[1])//             2>9
	{
		swap(arr[0],arr[1]);
	}
	for(int j=2;j<n;j++)//                     2                                 3                           4
	{
		for(int k=0;k<j;k++)//             0     1                       0      1      2            0      1       2      3
		{
		    if(arr[j]<arr[k])//          1<2     2<9                    8<1    8<2    8<9         3<1     3<2      3<8     9<8
		    {
		    	swap(arr[j],arr[k]);// 1,9,2,8,3  1,2,9,8,3               1,2,8,9,3                       1,2,3,8,9
			}
		}
    }
    for(int h=0;h<n;h++)
    {
    	cout<<arr[h]<<" ";
	}
return 0;
}
