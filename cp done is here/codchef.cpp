#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
#include<map>

using namespace std;

long long int change(long long int arr[],long long int sum, map<long long int ,long long int> &a)
{
    long long int key=sum;
    if(sum==0)
     {
        if(a.find(key)==a.end())
            a[key]=1;
        return a[key];
     }
    if(sum<0){
             if(a.find(key)==a.end())
            a[key]=0;
        return a[key];

    }
    for(int i=0;i<9;i++)
    {
        long long int p=sum-arr[i];
        if(change(arr,p,a)==1)
        {
             if(a.find(key)==a.end())
            a[key]=1;
        return a[key];
        }

    }
    a[key]=0;
    return a[key];
}


void  solve()
{
long long int n;

  long long int arr[]={11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};


cin>>n;


map<long long int,long long int> a;
if(change(arr,n,a))
    cout<<"yes";
else
    cout<<"no";



}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
