#include<bits/stdc++.h>

using namespace std;

void solve()
{
int n;
cin>>n;
int dp[n+1];
dp[0]=1;
dp[1]=1;
dp[2]=1;
dp[3]=2;
for(int i=4;i<=n;i++)
{//this is the recurrence relation 
//when we have to count the  no of ways dp is generally of the fib form 
//size of the dp array is usually bigger than 1 from the input
   dp[i]=dp[i-1]+dp[i-3]+dp[i-4];	
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