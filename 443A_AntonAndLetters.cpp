#include<iostream>
using namespace std;
int main()
{
	char arr[100];
	cin.getline(arr,100);
	int count=0;
	for(char c='a';c<='z';c++)
	{
		for(int i=1;i<100;i=i+3)
		{
			if(arr[i]==c)
			{
				count++;
				break;
			}
		}
	}
	cout<<count;
}
