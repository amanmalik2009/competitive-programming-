#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;


int lcs(string x,string y,int m,int n,auto &ma){
    if(m==0||n==0)
        return 0;
        string key=to_string(m)+"|"+to_string(n);
        //if key dosent exist then calculate it;

        if(ma.find(key)==ma.end())
        {


    if(x[m-1]==y[n-1])
        ma[key]=lcs(x,y,m-1,n-1,ma)+1;
        else
     ma[key]=max(lcs(x,y,m-1,n,ma),lcs(x,y,m,n-1,ma));}
     //here  we are returning the calculated value
     //if we dont calculate then the key is already there and we simply return the value

     return ma[key];
}

void solve()
{
    unordered_map<string,int> ma;
    string x,y;
    cin>>x>>y;
    int m=x.size();
    int n=y.size();
    cout<<lcs(x,y,m,n,ma);
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
