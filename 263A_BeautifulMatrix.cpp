#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int arr[5][5];int r,c,n;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]!=0)
			{
				r=i;
				c=j;
			}
		}
	}
	n=abs(r-2)+abs(c-2);
	cout<<n;
	return 0;
}
