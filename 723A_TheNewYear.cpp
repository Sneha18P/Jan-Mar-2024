#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	int sum=x1+x2+x3;
	int avg=sum/3;
	int dist=abs(x1-avg)+abs(x2-avg)+abs(x3-avg);
	cout<<dist;
}
