#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int solve(vector<int> &v)
{
    int n=v.size();
    int ans=v[0];
    for(int i=1;i<n;i++)
        {
            int ans=gcd(ans, v[i]);
        }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans= solve(v);
    if(ans>1)
        cout<<1;
    else
        cout<<0;
}
