#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	unordered_map<char,int> mp;
	int t;
	cin>>t;
	while(t--)
	{
	    int c=0;
		int n;
		cin>>n;
		string s;
    	cin>>s;
		for(int i=0;i<n;i++)
		{
			if(mp[s[i]]==0)
			 c=c+2;
			else
			 c++;
			mp[s[i]]++;
		}
		cout<<c<<endl;
		for(int i=0;i<n;i++)
		{
		    mp[s[i]]=0;
		}
	}
	return 0;
}