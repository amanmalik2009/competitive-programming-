#include<bits/stdc++.h>

using namespace std;


void solve()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 bool pal=true,rev=false;
 int alice=0,bob=0;
 bool aturn=true;
 for(int i=0;i<n;i++)
 {
     if(s[i]!='1')
     {


     if(pal)
     {
         if(n%2!=0&&s[n/2]=='0')
         {
             s[n/2]='1';
            if(aturn)
                alice++;
            else
                bob++;
            if(aturn)
                    aturn=false;
            else
                aturn=true;
                if(rev)
                    rev=false;
         }
         else
         {
             s[i]='1';
              if(aturn)
                alice++;
            else
                bob++;
            if(aturn)
                    aturn=false;
            else
                aturn=true;
            if(rev)
                    rev=false;
            pal=false;

         }



     }
     else
     {
         if(rev==false)
         {
           rev =true;
           if(aturn)
                    aturn=false;
            else
                aturn=true;
         i--;
         }
         else
         {
            int  flag=0;
             for(int j=i;j<n;j++)
                if(s[n-j+1]=='1')
             {
                 s[j]='1';
                 flag=1;
                 pal=true;
             }
             if(flag==0)
               {
                 s[i]='1';
                 pal=false;
               }
               if(aturn)
                alice++;
            else
                bob++;
            if(aturn)
                    aturn=false;
            else
                aturn=true;
            if(rev)
                    rev=false;

         }

     }
 }
 }

 cout<<alice<<" "<<bob<<endl;



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
