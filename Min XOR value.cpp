#include <bits/stdc++.h>
using namespace std;
int ans=INT_MAX;
void solve(vector<int>&v, int n)
{

    sort(v.begin(), v.end());
    for(int i=1;i<v.size();i++)
    {
        ans=min(ans, v[i]^v[i-1]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,n);
    cout<<ans;
}

