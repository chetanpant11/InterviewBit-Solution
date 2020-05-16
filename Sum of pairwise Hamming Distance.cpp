#include <bits/stdc++.h>
using namespace std;
int ans=0;
void solve(vector<int>&v, int n)
{
    for(int i=0;i<32;i++)
    {
        int zero=0;
        int one=0;
        for(int j=0;j<n;j++)
        {
            if((v[j]>>i)&1)
                one++;
            else
                zero++;
        }
        if(one==n||zero==n)
            continue;
        ans+=2*zero*one;

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

