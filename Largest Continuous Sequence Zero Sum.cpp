#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

void solve(vector<int>&v, int n)
{
    int sum=0;
    unordered_map<int,int>mp;
    vector<int> ans;
    ans.insert(ans.begin(),0);
    //set<pair<int,pair<int,int>>>s;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        ans.push_back(sum);
    }
    int save1=0, save2=0, len=0,ac_len=0;
    for(int i=0;i<ans.size();i++)
    {
        if(mp.find(ans[i])!=mp.end())
        {
            len=i-mp[ans[i]];
            if(len>ac_len)
            {
                save1=mp[ans[i]];
                save2=i;
                ac_len=len;
            }
        }
        else
        {
            mp[ans[i]]=i;
        }
    }
    vector<int> a;
    for(int i=save1;i<save2;i++)
    {
        a.push_back(v[i]);
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

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

