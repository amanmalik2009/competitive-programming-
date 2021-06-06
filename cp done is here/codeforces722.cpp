#include<bits/stdc++.h>

using namespace std;

void solve()
{
 int n;
 cin>>n;
 vector<long int> arr,tmp;

 for(int i=0;i<n;i++)
 {
     int c;
     cin >>c;
     arr.push_back(c);

 }
 tmp=arr;
 sort(tmp.begin(),tmp.end());
 int ans=n;
 for(int i=0;i<n;i++)
 {
     if(abs(tmp[0]-tmp[ans-1])>=tmp[ans-1])
     {
       cout<<ans<<endl;
       break;
     }
     else
     {
        ans--;
     }
 }



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
