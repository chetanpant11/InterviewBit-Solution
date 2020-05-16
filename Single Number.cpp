#include <bits/stdc++.h>
using namespace std;
int ans=0;
void solve(vector<int>&A, int n)
{
    for(int i=0;i<A.size();i++)
    {
       ans^=A[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,n);
    cout<<ans;
}

