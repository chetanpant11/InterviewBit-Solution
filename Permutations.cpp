#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;
vector<vector<int>> ans;

void solve(vector<int>&v, int index,vector<int>&v1)
{
    if(index==v.size())
    ans.push_back(v1);

    for(int i=index;i<v.size();i++)
    {
        swap(v[i],v[index]);
        v1.push_back(v[index]);
        solve(v, index+1,v1);
        swap(v[i],v[index]);
        v1.pop_back();

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
    vector<int>v1;
    solve(v,0,v1);
    for(int i=0;i<ans.size();i++)
        {
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j]<<" ";
    cout<<endl;
    }
}

