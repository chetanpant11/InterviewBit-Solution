#include <bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>&v)
{
    long long int assq=0,assum=0,ssq=0,ssum=0,a,b;
    int s=v.size();
    for(int i=0;i<s;i++)
    {
        ssum+=v[i];
        ssq+=v[i]*v[i];
    }
    assq=(s*(s+1)*(2*s+1)/6);
    assum=s*(s+1)/2;
    long long c1=abs(assq-ssq);
    long long c2=abs(assum-ssum);
    vector<int>ans;
    a=(c1/c2+c2)/2;
    b=a-c2;
    ans.push_back(a);ans.push_back(b);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n),ans(2);
    for(int i=0;i<n;i++)
        cin>>v[i];
    ans=solve(v);
    //cout<<ans.size();
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}

