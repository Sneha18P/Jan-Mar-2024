#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		 cin>>arr[i];
		int min=arr[0];
		for(int i=1;i<n;i++)
		{
			if(min>arr[i])
			 min=arr[i];
		}
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+(arr[i]-min);
		}
		cout<<sum<<endl;
	}
}
