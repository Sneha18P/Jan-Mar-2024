#include<iostream>
using namespace std;
int main()
{
	string guest;string host;string pile;
	cin>>guest;
	cin>>host;
	cin>>pile;
	string add=guest+host;
	int n=add.size();
	int m=pile.size();
	int f=0;
	if(m!=n)
	 cout<<"NO";
	else
	{
		for(char c='A';c<='Z';c++)
		{
			int c1=0;int c2=0;
			for(int i=0;i<n;i++)
			{
				if(c==add[i])
				 c1++;
			}
			for(int i=0;i<m;i++)
			{
				if(c==pile[i])
				 c2++;
			}
			if(c1!=c2)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		 cout<<"NO";
		else
		 cout<<"YES";
	}
	return 0;
}
