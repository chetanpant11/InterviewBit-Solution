#include <bits/stdc++.h>
using namespace std;
int maximum_absolute(vector<int>&v)
{
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int max1=INT_MIN;
    int min1=INT_MAX;
    int s=v.size();
    for(int i=0;i<s;i++)
    {
        maxi=max(maxi,v[i]+i+1);
        mini=min(mini,v[i]+i+1);
        max1=max(max1,v[i]-(i+1));
        min1=min(min1,v[i]-(i+1));
    }
    if(max1-min1>maxi-mini)
        return max1-min1;
    else
        return maxi-mini;

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
    int ans=maximum_absolute(v);
    cout<<ans;
}

