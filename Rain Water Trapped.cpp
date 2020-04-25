#include <bits/stdc++.h>
using namespace std;
int trap_water(const vector<int>&v)
{
    int ans=0,ans1=INT_MAX;
    int siz=v.size();
    vector<int>left(siz);
    vector<int>right(siz);
    left[0]=v[0];
    right[siz-1]=v[siz-1];
    for(int i=1;i<siz;i++)
    {
        left[i]=max(left[i-1],v[i]);
    }
    for(int i=siz-2;i>=0;i--)
    {
        right[i]=max(right[i+1],v[i]);
    }
    for(int i=0;i<siz;i++)
    {
        ans+=min(right[i],left[i])-v[i];
    }
    return ans;
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
    int ans=trap_water(v);
    cout<<ans;

}
