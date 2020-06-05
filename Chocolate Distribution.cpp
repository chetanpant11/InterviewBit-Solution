#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

int solve(vector<int>&v, int n, int b)
{
    if(v.size()==0)
        return 0;
    if(b==0)
        return 0;
    int ans=INT_MAX;
    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++)
    {
        if(i+b>v.size())
            break;
        ans=min(ans, abs(v[i]-v[(i+b)-1]));
    }
return ans;
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
    int b;
    cin>>b;
    cout<<solve(v,n,b);
}
