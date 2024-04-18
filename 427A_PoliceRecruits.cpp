#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=0;int p=0;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]==-1)
		{
			if((p-1)<0)
			 c++;
			else
			 p--;
		}
		else
		 p=p+arr[i];
	}
	cout<<c;
	return 0;
}
