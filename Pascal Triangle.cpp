#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> solve(int n)
{
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
    return v;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>ans;
    ans=solve(n);
    for(int i=0;i<n+1;i++){
        for(int j=0;j<=i;j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
        }
}



