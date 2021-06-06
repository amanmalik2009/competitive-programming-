#include<bits/stdc++.h>

using namespace std;

void solve()
{
int n,a,b,c;
cin>>n>>a>>b>>c;

int dp[n+1]={0};

dp[a]=1;
dp[b]=1;
dp[c]=1;
{
	for(int i=max(a,b,c);i<=n;i++)
	{
	  dp[i]=1+max({dp[i-a],dp[i-b],dp[i-c]});
	}
}
cout<<dp[n];
}

int main()
{
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}