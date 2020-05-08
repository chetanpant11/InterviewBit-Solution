#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll int ans1=0;
ll int solve(ll int n)
{
    for(ll int i=1;i<=n;i=i*10)
    {
        ll int counter=i*10;
        ans1+=(n/counter)*i+min(max(n%counter-i+1,0ll),i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
    cout<<ans1;
}
