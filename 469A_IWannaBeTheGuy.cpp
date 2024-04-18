#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p;int q;
	cin>>p;
	int parr[p];
	for(int i=0;i<p;i++)
	 cin>>parr[i];
	cin>>q;
	int qarr[q];
	for(int i=0;i<q;i++)
	 cin>>qarr[i];
	int arr[n+1]={0};
	for(int i=0;i<p;i++)
	 arr[parr[i]]++;
	for(int i=0;i<q;i++)
	 arr[qarr[i]]++;
	int f=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	 cout<<"Oh, my keyboard!";
	else
	 cout<<"I become the guy.";
	return 0;
}
