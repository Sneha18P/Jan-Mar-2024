#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		 s=s+"I love ";
		else
		 s=s+"I hate ";
		if(i==n)
		 s=s+"it";
		else
		 s=s+"that ";
	}
	cout<<s;
}
