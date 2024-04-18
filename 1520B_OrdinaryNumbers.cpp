#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n<=9)
		 cout<<n<<endl;
		else
		{
			int c=9;
			int temp=11;
			while(temp<=n)
			{
				c++;
				temp=temp+11;
			}
			cout<<c<<endl;
		}
	}
	return 0;
}
