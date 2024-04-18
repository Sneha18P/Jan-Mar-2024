#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int ml=(k*l)/nl;
	int lime=c*d;
	int salt=p/np;
	int t=min(ml,lime);
	t=min(t,salt);
	t=t/n;
	cout<<t;
	return 0;
}
