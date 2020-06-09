#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

int solve(vector<int>&v, int n, int k)
{
    int sum=0, save_len=0;
    unordered_map<int, int>mp;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum==k)
        {
            save_len=i+1;
        }
        if(mp.find(sum)==mp.end())
        {
            mp[sum]=i;
        }
         if(mp.find(sum-k)!=mp.end())
        {
            save_len=max(save_len, i-mp[sum-k]);
        }
    }
    if(save_len==0)
        return -1;
    else
        return save_len;

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
    int k;
    cin>>k;
    cout<<solve(v,n,k);
}

