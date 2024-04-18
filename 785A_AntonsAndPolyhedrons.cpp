#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;int f=0;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		if(s=="Tetrahedron")
		 f=f+4;
		else if(s=="Cube")
		 f=f+6;
		else if(s=="Octahedron")
		 f=f+8;
		else if(s=="Dodecahedron")
		 f=f+12;
		else
		 f=f+20;
	}
	cout<<f;
	return 0;
}
