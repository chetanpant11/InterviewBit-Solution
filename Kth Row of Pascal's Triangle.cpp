#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n)
{
    vector<int> ans(n+1);
    vector<vector<int>> v(n+1, vector<int>(n+1));
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==j)
                v[i][j]=1;
            else
                v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
    }
    for(int i=0;i<=n;i++)
    {
        int a=v[n][i];
        ans[i]=a;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    ans=solve(n);
    for(int i=0;i<n+1;i++)
        cout<<ans[i];
}


