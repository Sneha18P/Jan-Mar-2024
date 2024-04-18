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
		string s1;string s2;
		cin>>s1;
		cin>>s2;
		int f=0;
		for(int i=0;i<n;i++)
		{
			if(s1[i]!=s2[i])
			{
				if(s1[i]=='R' || s2[i]=='R')
				{
					f=1;
					break;
				}
			}
		}
		if(f==1)
		 cout<<"NO"<<endl;
		else
		 cout<<"YES"<<endl;
	}
	return 0;
}
