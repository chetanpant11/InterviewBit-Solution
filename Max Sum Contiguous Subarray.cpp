#include <bits/stdc++.h>
using namespace std;
int max_sum(vector<int>&v)
{
    int maxx=0;
    int max_so_far=0;
    int s=v.size();
    for(int i=0;i<s;i++)
    {
        maxx+=v[i];
        if(maxx<0)
        {
            maxx=0;
        }
        if(maxx>max_so_far)
        {
            max_so_far=maxx;
        }
    }
    return max_so_far;
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
    int ans=max_sum(v);
    cout<<ans;
}
