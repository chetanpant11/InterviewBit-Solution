#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    bool i=true;
    int a=0;
    while(i)
    { if(pow(2,a)>n)
        i=false;
      else
        a++;}
     return pow(2,a-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans;
    ans=solve(n);
    cout<<ans;
}
