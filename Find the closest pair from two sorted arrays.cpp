#include <bits/stdc++.h>
using namespace std;
vector<int>ans(2);
void solve(vector<int>&v, vector<int>&v1,int c)
{
    int diff=INT_MAX;
    int res_l,res_r;
    int l=0,r=v1.size()-1;
    while(l<v.size()&&r>=0)
    {
        if(abs(v[l]+v1[r]-c)<diff)
        {
            res_l=l;
            res_r=r;
            diff=abs(v[l]+v1[r]-c);
        }
        if(v[l]+v1[r]>c)
            r--;
        else
            l++;
    }
    ans[0]=v[res_l];
    ans[1]=v1[res_r];
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
    int m;
    cin>>m;
    vector<int> v1(m);
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    int c;
    cin>>c;
    solve(v,v1,c);
    cout<<ans[0]<<" "<<ans[1];
}

