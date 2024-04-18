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
		int a[n];int b[n];
		for(int i=0;i<n;i++)
		 cin>>a[i];
		for(int i=0;i<n;i++)
		 cin>>b[i];
		int c=0;
		int amin=a[0];
		int bmin=b[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<amin)
			 amin=a[i];
			if(b[i]<bmin)
			 bmin=b[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]>amin && b[i]>bmin)
			{
				int ac=a[i]-amin;
				int bc=b[i]-bmin;
				if(ac>bc)
				 c=c+ac;
				else if(bc>ac)
				 c=c+bc;
				else
				 c=c+ac;
			}
			else
			{
				if(a[i]>amin)
				 c=c+(a[i]-amin);
				if(b[i]>bmin)
				 c=c+(b[i]-bmin);
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
