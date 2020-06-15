#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

void solve(vector<int>&v, int n,int k)
{
    vector<int>ans;
    deque<int> dq;
    dq.push_back(0);
    int i;
    for(i=1;i<k;i++)
    {
        while(!dq.empty()&&v[i]>v[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    //cout<<v[dq.front()]<<endl;
    for(;i<n;i++)
    {
        ans.push_back(v[dq.front()]);
        while(!dq.empty()&&(i-k)>=dq.front())
        {
            dq.pop_front();
        }
        while(!dq.empty()&&v[i]>v[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(v[dq.back()]);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<1/0;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    solve(v,n,k);
}

