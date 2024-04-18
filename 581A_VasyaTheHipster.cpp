#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int c=0;
	int rem;
	if(a>b)
	 c=b;
	else if(b>a)
	 c=a;
	else
	 c=a;
	rem=abs(a-b);
	rem=rem/2;
	cout<<c<<" "<<rem;
	return 0;
}
