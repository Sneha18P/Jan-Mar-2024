#include<iostream>
using namespace std;
int main()
{
	long n;
	cin>>n;int c=0;
	for(int i=5;i>=2;i--)
	{
		c=c+n/i;
		n=n%i;
		if(n==0)
		 break;
	}
	if(n!=0)
	 c=c+n;
	cout<<c;
	return 0;
}
