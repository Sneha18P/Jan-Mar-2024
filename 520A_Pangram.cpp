#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[26]={0};
	int n;
	cin>>n;
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::toupper);
	for(int i=0;i<n;i++)
	{
		arr[s[i]-65]++;
	}
	int f=0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	 cout<<"NO";
	else
	 cout<<"YES";
	return 0;
}
