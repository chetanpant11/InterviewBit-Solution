#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;
vector<vector<int>> ans(3, vector<int>(3,0));

bool chk(int i, int j, int n, int m)
{
    if(i<0||j<0||i>=n||j>=m)
        return false;
    return true;

}
void solve(vector<vector<int>>&v, int n, int m, vector<vector<bool>>&visited)
{
    queue<pair<int, int>> q;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            if(v[i][j]==1)
            {
                visited[i][j]=true;
                q.push({i, j});
            }
        }
    }
    while(q.empty()!=true)
    {
        pair<int,int>p=q.front();
        q.pop();
        int i=p.first;
        int j=p.second;
        if(chk(i+1, j, n, m)&&visited[i+1][j]==false)
        {
            ans[i+1][j]=ans[i][j]+1;
            visited[i+1][j]=true;
            q.push({i+1,j});
        }
        if(chk(i-1, j, n, m)&&visited[i-1][j]==false)
        {
            ans[i-1][j]=ans[i][j]+1;
            visited[i-1][j]=true;
            q.push({i-1,j});
        }
        if(chk(i, j+1, n, m)&&visited[i][j+1]==false)
        {
            ans[i][j+1]=ans[i][j]+1;
            visited[i][j+1]=true;
            q.push({i,j+1});
        }
        if(chk(i, j-1, n, m)&&visited[i][j-1]==false)
        {
            ans[i][j-1]=ans[i][j]+1;
            visited[i][j-1]=true;
            q.push({i,j-1});
        }
    }
cout<<endl;
for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";
        }
    cout<<endl;
    }
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
    vector<vector<bool>>visited(n,vector<bool>(m, false));
    solve(v,n,m, visited);
}
