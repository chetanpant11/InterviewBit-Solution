#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

bool can_place(vector<ll>&v, int b,int mid)
{
    ll sum=0;
    int count=1;
    for(int i=0;i<v.size();i++)
    {
      if(sum+v[i]>mid)
      {
        count++;
        sum=v[i];
        if(count>b)
         return false;
      }
      else
      {
        sum+=v[i];
      }
    }
    return true;
}

void solve(vector<ll>&v, int n,int b)
{
    ll low=*max_element(v.begin(),v.end());
    ll high=0;
    for(int i=0;i<v.size();i++)
    {
        high+=v[i];
    }
    ll ans=INT_MAX;
    while(low<=high)
    {
        ll mid = low+(high-low)/2;
        if(can_place(v,b,mid))
        {
            high=mid-1;
            ans=min(mid,ans);
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int b;
    cin>>b;
    solve(v,n,b);
}
