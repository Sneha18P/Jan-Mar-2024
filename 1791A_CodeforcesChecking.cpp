#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char c;
		cin>>c;
		string s="codeforces";
		int n=s.size();
		int f=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]==c)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		 cout<<"YES"<<endl;
		else
		 cout<<"NO"<<endl;
	}
	return 0;
}
