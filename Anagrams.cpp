#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

void solve(vector<string>&v, int n)
{
    unordered_map<string, vector<int>>mp;
    vector<vector<int>>ans;
   for(int i=0;i<n;i++)
   {
       string s=v[i];
       sort(s.begin(), s.end());
       mp[s].push_back(i);
   }
    for(auto l: mp)
    {
        ans.push_back(l.second);
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]+1<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<1/0;
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,n);
}

