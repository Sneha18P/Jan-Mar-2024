#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c1=0;int c2=0;
	for(int i=1;i<=n;i++)
	{
		int m,c;
		cin>>m>>c;
		if(m>c)
		 c1++;
		if(c>m)
		 c2++;
	}
	if(c1>c2)
	 cout<<"Mishka";
	else if(c1<c2)
	 cout<<"Chris";
	else
	 cout<<"Friendship is magic!^^";
}
