#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	if(arr[0][0]=='B' || arr[0][0]=='W' || arr[0][0]=='G')
	 cout<<"#Black&White";
	else
	 cout<<"#Color";
	return 0;
}
