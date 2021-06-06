#include<bits/stdc++.h>
#define INF 1e+9
using namespace std;




int solve(int n,int k  )
{
if(n==0)return 0;
if (k==1)return n;
int res=INF;
for(int i=1;i<=n+1;i++)
{
    res=min(res,max(solve(k,n-i),solve(k-1,i-1))+1);
}
return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ,k;
        cin>>n>>n;
        cout<<solve(n,k);
    }
}
