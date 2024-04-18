#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();int i;
	for(i=0;i<n-1;i++)
	{
		if(s[i]=='.')
		 cout<<"0";
		if(s[i]=='-')
		{
			if(s[i+1]=='.')
			 cout<<"1";
			else
			 cout<<"2";
			i++;
		}
	}
	if(i<n)
	 cout<<"0";
	return 0;
}
