#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> lic(n),dp(n,1);
    for(int &s: lic)
        cin>>s;
     ;
     //here wwe are storing the last maximum element for comparison;
     int mx=lic[0];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<i;j++)
      {
      	if(lic[i]>lic[j]&&dp[i]<dp[j]+1)
      	dp[i]=dp[j]+1;
      	
      }

    }

cout<<*max_element(dp.begin(),dp.end());
    return 0 ;
}
