#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

void solve(vector<vector<int>>&v, int n, int m, int a)
{
    vector<int> ans(a);
    for(int i=0;i<n;i++)
    {
        int start=v[i][0];
        int end=v[i][1];
        int weight=v[i][2];

        ans[start-1]+=weight;
        if(end!=ans.size())
            ans[end]+=-weight;
    }
    for(int i=1;i<ans.size();i++)
    {
        ans[i]=ans[i-1]+ans[i];
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
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
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>v[i][j];
    }
    int a;
    cin>>a;
    solve(v,n,m,a);
}

//3
//3
//1 2 10
//2 3  20
//2 5 25
//5
