#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans(3, vector<int>(2));

void solve(vector<int>&v, vector<vector<int>>&v1)
{
    vector<pair<int, int>>p(v.size());
    if(v[0]==1)
    {
        p[0].first=0;
        p[0].second=1;
    }
    if(v[0]==0)
    {
        p[0].first=1;
        p[0].second=0;
    }
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==0){
            p[i].first=p[i-1].first+1;
            p[i].second=p[i-1].second;
            }
        if(v[i]==1)
        {
            p[i].first=p[i-1].first;
            p[i].second=p[i-1].second+1;
        }
    }
    for(int i=0;i<v1.size();i++)
    {
        int l=v1[i][0]-1;
        int r=v1[i][1]-1;
        int zero,one;
        if(l==0)
        {
            zero=p[r].first-(p[l].first);
            one=p[r].second-(p[l].first);
        }
        else
        {zero=(p[r].first-p[l-1].first);
        one=(p[r].second-p[l-1].second);
        }
        ans[i][1]=zero;
        if(one%2==0)
            ans[i][0]=0;
        else
            ans[i][0]=1;
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
    int q;
    cin>>q;
    vector<vector<int>>v1(q, vector<int>(2));
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>v1[i][j];
        }
    }
    solve(v,v1);
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<2;j++)

        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
