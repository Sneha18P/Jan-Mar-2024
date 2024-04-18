#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    unordered_map<int,int> mp;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
         cin>>arr[i];
        for(int i=0;i<n;i++)
         mp[arr[i]]++;
        int f=0;
        for(auto x:mp)
        {
            if(x.second>1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
         cout<<"NO"<<endl;
        else
         cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
         mp[arr[i]]=0;
    }
    return 0;
}