#include<bits/stdc++.h>

using namespace std;

void solve()
{
 int n,m;
 string s;
 cin>>n>>m>>s;
 string g=s;
 for(int j=0;j<m;j++)
 {
for(int i=0;i<n;i++)
{
    if(s[i]==0)
{
    if((s[i+1]=='1'&&s[i-1]=='0')||s[i-1]=='1'&&s[i+1]=='0')
        g[i]='1';
}
}
s=g;
 }
 cout<<g;
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
