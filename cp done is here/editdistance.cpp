#include<bits/stdc++.h>

using namespace std;


void solve()
{
 string s;
 string g;
 cin>>s>>g;
 int n=s.size();
 int m=g.size();
 int dp[n+1][m+1];
 dp[0][0]=0;

 for(int i=0;i<=n;i++)
    for(int j=0;j<=m;j++)
    {
        if(j==0)   //for filling first coloumn
            dp[i][j]=i;
        else if(i==0)// for filling fisrt row
            dp[i][j]=j;


    else  if(s[i-1]==g[j-1])
            dp[i][j]=dp[i-1][j-1];
      else
{

       int m =min(dp[i][j-1],dp[i-1][j]);
       dp[i][j]=1+min(dp[i-1][j-1],m);
 }
    }
 for(int i=0;i<=n;i++)
 {
     for(int j=0;j<=m;j++)
        cout<<dp[i][j]<<" ";
     cout<<endl;
 }
;
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
