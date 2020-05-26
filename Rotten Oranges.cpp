#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

int count1=-1;
bool chk(int i, int j,int n, int m)
{
    if(i<0||j<0||i>=n||j>=m)
        return false;
    return true;
}

int solve(vector<vector<int>>&v, int n,int m,vector<vector<bool>>&visited)
{
    queue<pair<int, int>> q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
                if(v[i][j]==0)
                {
                    visited[i][j]=true;
                }
                if(v[i][j]==2)
                {q.push({i,j});
                visited[i][j]=true;}
            }
    }
    while(q.empty()!=true)
    {
        count1++;

        int size = q.size();

        for(int k = 0; k < size; k++)
            {
                pair<int, int>p=q.front();
                q.pop();
                if(chk(p.first+1,p.second,n, m)&&visited[p.first+1][p.second]==false)
                {
                    q.push({p.first+1,p.second});
                    visited[p.first+1][p.second]=true;
                }
                if(chk(p.first,p.second+1,n, m)&&visited[p.first][p.second+1]==false)
                {
                    q.push({p.first,p.second+1});
                    visited[p.first][p.second+1]=true;
                }
                if(chk(p.first-1,p.second,n, m)&&visited[p.first-1][p.second]==false)
                {
                    q.push({p.first-1,p.second});
                    visited[p.first-1][p.second]=true;
                }
                if(chk(p.first,p.second-1,n, m)&&visited[p.first][p.second-1]==false)
                {
                    q.push({p.first,p.second-1});
                    visited[p.first][p.second-1]=true;
                }
            }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]==false)
                return -1;
        }
    }
    return count1;
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
    cout<<solve(v,n,m, visited);
}
