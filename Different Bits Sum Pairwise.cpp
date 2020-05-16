#include <bits/stdc++.h>
#define ll long long
unsigned long long int mod =1e9+7;

using namespace std;
ll int ans=0;
void solve(vector<ll int>&v, ll int n)
{
    n=v.size();
    for(int i=0;i<32;i++)
    {
        ll int zero=0;
        ll int one=0;
        for(int j=0;j<n;j++)
        {
            if((v[j]>>i)&1)
                one++;
            else
                zero++;
        }
        if(one==n||zero==n)
            continue;
        ans+=(zero%mod*one%mod)%mod*(2%mod)%mod;
        ans%=mod;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
    vector<ll int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,n);
    cout<<ans;
}
