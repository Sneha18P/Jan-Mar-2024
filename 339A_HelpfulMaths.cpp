#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	for(int i=0;i<n-2;i=i+2)
	{
		if(s[i]>s[i+2])
		{
			char t=s[i];
			s[i]=s[i+2];
			s[i+2]=t;
		}
	}
	cout<<s;
}
