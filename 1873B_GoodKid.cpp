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
		int p=1;
		for(int i=1;i<n;i++)
		{
			if(arr[i]<min)
			 min=arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==min)
			{
				p=p*(min+1);
				min=-1;
			}
			else
			 p=p*arr[i];
		}
		cout<<p<<endl;
	}
	return 0;
}
