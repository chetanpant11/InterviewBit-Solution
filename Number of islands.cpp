#include <bits/stdc++.h>
using namespace std;
void dfs(int i,int j,vector<vector<bool>> &dp,vector<vector<int>> &A)
{
    if(i<0||j<0||i>=A.size()||j>=A[0].size())
    return;

   if(A[i][j]==1&&dp[i][j]==false)
   {
     dp[i][j]=true;
      dfs(i-1,j,dp,A);
      dfs(i,j-1,dp,A);
      dfs(i+1,j,dp,A);
      dfs(i,j+1,dp,A);
      dfs(i-1,j-1,dp,A);
      dfs(i+1,j+1,dp,A);
      dfs(i-1,j+1,dp,A);
      dfs(i+1,j-1,dp,A);
   }
return ;
}

int solve(vector<vector<int>>&A)
{
    vector<vector<bool>> dp(A.size(),vector<bool>(A[0].size(),false));
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
        if(A[i][j]==1&&dp[i][j]==false)
        {
          dfs(i,j,dp,A);
          count++;
        }
        }
}
return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
             cin>>v[i][j];
            }
    }
    cout<<solve(v);
}
