#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> set_zero(vector<vector<int>>&v)
{
    int n=v.size();
    int m=v[0].size();
    set<int>row;
    set<int>col;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==0)
            {
                row.insert(i);
                col.insert(j);
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row.find(i)!=row.end()||col.find(j)!=col.end())
                v[i][j]=0;
        }
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>>v(n, vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }//cout<<"dd";
        vector<vector<int>>ans(n, vector<int>(n));
        ans=set_zero(v);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

