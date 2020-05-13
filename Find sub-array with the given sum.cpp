#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> ans1;
void solve(vector<int>&v, int n, int b)
{
   ll int ans=v[0];
    ll int i=0,j=0;
    bool chk=false;
    while(j<=v.size()-1)
    {
        if(ans<b)
            {
                j++;
                ans+=v[j];
            }
        if(ans>b)
            {
                ans-=v[i];
                i++;
            }
        if(ans==b)
        {
            chk=true;
            break;
        }
    }
    if(chk)
    for(int k=i;k<=j;k++)
        ans1.push_back(v[k]);
    else
        ans1.push_back(-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    int b;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>b;
    solve(v,n,b);
    for(int i=0;i<ans1.size();i++)
        cout<<ans1[i]<<" ";

}
