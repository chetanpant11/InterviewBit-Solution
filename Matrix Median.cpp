#include <bits/stdc++.h>
#define ll long long
unsigned long long int mod =1e9+7;

using namespace std;
void solve(vector<vector<int>>&v, int n, int m)
{
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mini=min(mini, v[i][0]);
        maxi=max(maxi, v[i][m-1]);
    }
    int chk=(n*m+1)/2;
    int ans;
    while(mini<maxi)
    {
        int count=0;
        int mid=mini+(maxi-mini)/2;
        for(int i=0;i<n;i++)
            count+=upper_bound(v[i].begin(),v[i].end(),mid)-v[i].begin();

        if(count<chk)
            mini=mid+1;
        else
            maxi=mid;

    }
    cout<<mini;
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
        {
        cin>>v[i][j];
        }
    }
    solve(v,n,m);
}
