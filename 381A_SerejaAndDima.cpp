#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	int p1=0;
	int p2=n-1;
	int s1=0;
	int s2=0;int f=0;
	while(p1<=p2)
	{
		if(f%2==0)
		{
			if(arr[p1]>arr[p2])
			{
				s1=s1+arr[p1];
				p1++;
			}
			else
			{
				s1=s1+arr[p2];
				p2--;
			}
		}
		else
		{
			if(arr[p1]>arr[p2])
			{
				s2=s2+arr[p1];
				p1++;
			}
			else
			{
				s2=s2+arr[p2];
				p2--;
			}
		}
		f++;
	}
	cout<<s1<<" "<<s2;
    return 0;
}
