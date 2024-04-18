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
		string check="codeforces";
		int c=0;
		for(int i=0;i<check.length();i++)
		{
			if(s[i]!=check[i])
			 c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
