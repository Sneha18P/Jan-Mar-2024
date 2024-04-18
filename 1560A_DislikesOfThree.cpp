#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0;
		int k;
		cin>>k;
		int n=0;
		while(i<k)
		{
			n++;
			if(n%3!=0 && n%10!=3)
			 i++;
		}
		cout<<n<<endl;
	}
	return 0;
}
