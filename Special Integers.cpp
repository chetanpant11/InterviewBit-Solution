#include <bits/stdc++.h>
#define ll long long
using namespace std;

unsigned long long int mod =1e9+7;

bool check(vector<int>&v, int mid, int b)
{
    ll int sum=0;
    for(int i=0;i<mid;i++)
    {
        sum+=v[i];
    }
    if(sum>b)
            return false;
    for(int i=mid;i<v.size();i++)
    {
        sum+=v[i]-v[i-mid];
        if(sum>b)
            return false;
    }
    return true;
}

void solve(vector<int>&v, int n,int b)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(check(v,mid,b))
            l=mid+1;
        else
            r=mid-1;
    }
    cout<<l-1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,b;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>b;
    solve(v,n,b);
}

