#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

void solve(vector<int>&v, int n)
{
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }
    int count, ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        count=0;
        int a=v[i];
        if(mp.find(a-1)!=mp.end())
            continue;
        else
        {
            while(true)
            {
                count++;
                a++;
                if(mp.find(a)!=mp.end())
                    continue;
                else
                break;
            }
        }
        ans=max(ans, count);
    }
cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<1/0;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,n);
}

