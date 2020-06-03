#include <bits/stdc++.h>
#define ll long long
using namespace std;

unsigned long long int mod =1e9+7;

bool comp(const vector<int>&v1, const vector<int>&v2)
{
    ll int x=v1[0];
    ll int y=v1[1];
    ll int x1=v2[0];
    ll int y1=v2[1];

    return ((x*x+y*y)<(x1*x1+y1*y1));
}

void solve(vector<vector<int>>&v, int n, int m, int b)
{
    vector<vector<int>> ans;
    sort(v.begin(), v.end(), comp);
    int i=0;
    while(b--)
    {
        ans.push_back(v[i]);
        i++;
    }
    return ans;

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
    int b;
    cin>>b;
    solve(v,n,m,b);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
