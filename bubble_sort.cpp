#include<iostream>
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"enter the length of the array :";//here we are taking the length of the array from the user as his/her wish
	cin>>n;
	for(int i=0;i<n;i++)//accessing the n number of element's from the user 
	{
		cin>>arr[i];// ex:: 8,3,9,2,5,1
	}
	for(int i=1;i<n;i++)//iteratting the i to do the n no : of iteration's , EX:: i=1,2,3,4,5
	{
		for(int j=0;j<n-1;j++)//itterating j to do n-1 itteration's ,EX:: j=0,1,2,3,4
		{
			if(arr[j]>arr[j+1])//EX :: 8>3,9>2,9>5,9>1............
			{
				swap(arr[j],arr[j+1]); // EX :: 8->3,3->8 (3,8,9,2,5,1).............
			}
		}
	}
	cout<<"after sortinvg the given element's :"<<"\n";
	for(int i=0;i<n;i++)// itterating i for n times to display the element's after the bubble sorting  
	{
		cout<<arr[i]<<" ";// EX:: 1,2,3,5,8,9
	}
	return 0;
}
