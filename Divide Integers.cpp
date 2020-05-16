#include <bits/stdc++.h>
using namespace std;
#define ll long long

unsigned long long int mod =1e9+7;

int solve(ll int a, ll int b)
{
    int sign= a<0^b<0?-1:1;
    a=abs(a);
    b=abs(b);
    ll int t=0;
    ll int q=0;
    for(ll int i=31;i>=0;i--)
    {
        if(t+(b<<i)<=a)
        {
            t+=b<<i;
            q=q|(1ll<<i);
        }
    }
    if(sign<0)q=-q;
    return q>=INT_MAX||q<=INT_MIN?INT_MAX:q;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int a,b;
    cin>>a>>b;
    cout<<solve(a,b);
}
