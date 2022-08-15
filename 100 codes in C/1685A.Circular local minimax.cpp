#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int test,i,j,n,arr[n+4];
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0;i<n;i++)cin>>arr[i];
        sort(arr, arr+n);
        vector<int>v;
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=0,j=n/2;i<n/2;i++,j++)
        {
            v.push_back(arr[i]);
            v.push_back(arr[j]);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);
        int temp = 0;
        for(i=1;i<v.size()-1;i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
                continue;
            else if(v[i]<v[i-1] && v[i]<v[i+1])
                continue;
            else
            {
                temp=1;
                break;
            }
        }
        if (temp==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}
