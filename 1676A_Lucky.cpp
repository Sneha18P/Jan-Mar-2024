#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int s1=0;int s2=0;
		for(int i=0;i<=2;i++)
		{
			int n=s[i]-48;
			s1=s1+n;
		}
		for(int i=3;i<=5;i++)
		{
			int n=s[i]-48;
			s2=s2+n;
		}
		if(s1==s2)
		 cout<<"YES"<<endl;
		else
		 cout<<"NO"<<endl;
	}
}
