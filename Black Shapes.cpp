#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;
void DFS(vector<vector<char>>&v,int i, int j, vector<vector<bool>>&visited)
{
    if(i<0||j<0||i>=v.size()||j>=v[0].size())
        return;
    if(v[i][j]=='X'&&visited[i][j]==false)
    {
        visited[i][j]=true;
        DFS(v,i+1,j,visited);
        DFS(v,i,j+1,visited);
        DFS(v,i-1,j,visited);
        DFS(v,i,j-1,visited);
    }

}

void  solve(vector<vector<char>>&v,int n, int m, vector<vector<bool>>&visited)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='X')
            {
                if(visited[i][j]==false)
                {
                DFS(v, i, j, visited);
                count++;
                }
            }
        }
    }
    cout<<count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<char>>v(n,vector<char>(m));
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
