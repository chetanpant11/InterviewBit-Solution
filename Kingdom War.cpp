#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>v[i][j];
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            v[i][j]+=v[i][j+1];
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        for(int i=m-2;i>=0;i--)
        {
            v[i][j]+=v[i+1][j];
        }
    }
    int ans=INT_MIN;
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            ans=max(ans, v[i][j]);
    }
    cout<<ans;
}

