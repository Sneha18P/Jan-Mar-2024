#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	int p=97;int c=0;
	for(int i=0;i<n;i++)
	{
		int d=s[i];
		int diff=p-d;
		if(diff<0)
		{
			c=c+(diff+26);
		}
		else
		{
			if(diff>13)
			 c=c+(26-diff);
			else
			 c=c+diff;
		}
		p=d;
	}
	cout<<c;
	return 0;
}
