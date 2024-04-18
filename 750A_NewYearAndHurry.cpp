#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int t=0;int c=0;
	for(int i=1;i<=n;i++)
	{
		t=t+i*5;
		if((t+k)>240)
		 break;
		else
		 c++;
	}
	cout<<c;
	return 0;
}
