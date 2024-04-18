#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int c=0;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if((arr[i]+k)<=5)
		 c++;
	}
	cout<<c/3;
	return 0;
}
