#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;int c=1;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
			 cout<<"#";
		}
		else
		{
			if(c%2==0)
			{
				cout<<"#";
				for(int j=1;j<m;j++)
				 cout<<".";
			}
			else
			{
				for(int j=0;j<m-1;j++)
				 cout<<".";
				cout<<"#";
			}
			c++;
		}
		cout<<endl;
	}
}
