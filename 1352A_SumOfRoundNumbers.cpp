#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		int n;
		cin>>n;
		if(n%10==0 || (n>0 && n<=9))
		{
			cout<<"1"<<endl;
			cout<<n;
		}
		else
		{
			int num=n;
			int c=0;
			while(num!=0)
			{
				int d=num%10;
				if(d!=0)
				 c++;
				num=num/10;
			}
			cout<<c<<endl;
			int f=1;
			while(n!=0)
			{
				int d=(n%10)*f;
				f=f*10;
				if(d!=0)
				 cout<<d<<" ";
				n=n/10;
			}
		}
		t--;
	}
}
