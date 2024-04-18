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
		int n=s.size();
		if(n<=2)
		 cout<<s<<endl;
		else
		{
			string a="";
			a=a+s[0];
			for(int i=1;i<=n-2;i=i+2)
			 a=a+s[i];
			a=a+s[n-1];
			cout<<a<<endl;
		}
	}
	return 0;
}
