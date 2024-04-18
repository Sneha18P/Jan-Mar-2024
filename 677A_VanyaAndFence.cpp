#include<stdio.h>
int main()
{
	int n,h;
	scanf("%d %d",&n,&h);
	int arr[n];
	for(int i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	 int c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>h)
		 c=c+2;
		else
		 c=c+1;
	}
	printf("%d",c);
	return 0;
}
