#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		if(s[0]=='+'||s[2]=='+')
		 sum=sum+1;
		else
		 sum=sum-1;
	}
	cout<<sum;
}
