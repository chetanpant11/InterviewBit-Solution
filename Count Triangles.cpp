#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&v, int n)
{
    int ans=0;
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=1;i--)
        {
            int l=0;
            int r=i-1;
            while(l<r)
            {
                if(v[l]+v[r]>v[i])
             {
                 ans+=r-l;
                 r--;
             }
                else
                {
                l++;
                }
            }
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
    cout<<solve(v,n);
}

