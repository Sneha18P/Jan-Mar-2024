#include<iostream>
using namespace std;
int prime(int n)
{
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		 c++;
	}
	if(c<=2)
	 return 1;
	else
	 return 0;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int p;
	int i=n+1;
	while(1)
	{
		if(prime(i)==1)
		{
			p=i;
			break;
		}
		i++;
	}
	if(p==m)
	 cout<<"YES";
	else
	 cout<<"NO";
	return 0;
}
