#include<bits/stdc++.h>

using namespace std;


int  solve()
{
	vector<vector<int>> triangle={{2},{3,4},{6,5,7},{4,1,8,3}};
	 int n=triangle.size();
        if(n==2){
            return triangle[0][0]+min(triangle[1][0],triangle[1][1]);
        }
       vector<vector<int>> dp;
        for(int i=n-2;i>=0;i--)
        {
          for(int j=0;j<triangle[i].size();j++)
          {
              triangle[i][j]=triangle[i][j]+min(triangle[i+1][j],triangle[i+1][j+1]);
          }
        }
       return triangle[0][0];
 
}

int main()
{
    int t;
cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}