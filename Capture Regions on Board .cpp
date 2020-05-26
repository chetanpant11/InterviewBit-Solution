#include <bits/stdc++.h>
#define ll long long
using namespace std;

unsigned long long int mod =1e9+7;
void DFS(vector<vector<char>>&v,int i, int j,vector<vector<bool>>&visited)
{
       if(i<0||j<0||i>=v.size()||j>=v[0].size())
        return;

       if(visited[i][j]==false && v[i][j]=='O')
       {
           visited[i][j]=true;
           DFS(v,i+1,j,visited);
           DFS(v,i-1,j,visited);
           DFS(v,i,j+1,visited);
           DFS(v,i,j-1,visited);
       }
}

void solve(vector<vector<char>>&v,int n, int m,vector<vector<bool>>&visited)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0||j==0||i==v.size()-1||j==v[0].size()-1)
            {
                if(v[i][j]=='O')
                {
                DFS(v,i,j,visited);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]==false)
                v[i][j]='X';
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {cout<<v[i][j]<<" ";}
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
