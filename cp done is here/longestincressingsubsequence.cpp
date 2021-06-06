#include<bits/stdc++.h>

using namespace std; 

int main()
{
	int n;
	cin>>n;
	vector<int> d(n),dp(n,1);
	for(int &i:d)
	cin>>i;
	
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{// here the logic is that we update the value of dp from 1 to
		//dp{i}+1 if(the element before i is less than it )
		// also there is other condition the value only gets updated when we
		// we are getting a greater value by adding 1 to that dp
		// the time complexity is n square
			if(d[j]<d[i]&&dp[i]<dp[j]+1)
			dp[i]=dp[j]+1;
		}
	}
	
	cout<<*max_element(dp.begin(),dp.end());
	return 0;
	
}