#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&a, vector<int>&b,vector<int>&c)
{
    int ans=INT_MAX;
    int i=0,j=0,k=0;
    while(i<=a.size()-1&&j<=b.size()-1&&k<=c.size()-1)
    {
        ans=min(max(max(a[i],b[j]),c[k])-min(min(a[i],b[j]),c[k]),ans);
        if(a[i]>=c[k]&&b[j]>=c[k])
        k++;
        else if(a[i]>=b[j]&&b[j]<=c[k])
        j++;
        else if(a[i]<=b[j]&&a[i]<=c[k])
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
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int o;
    cin>>o;
    vector<int> c(o);
    for(int i=0;i<o;i++)
    {
        cin>>c[i];
    }
    cout<<solve(a,b,c);
}

