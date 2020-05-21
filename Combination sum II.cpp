#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;
vector<vector<int>>ans;
void solve(int index,vector<int>&v,int sum,vector<int>&v1)
{
    if(sum==0)
        ans.push_back(v1);

    if(sum<0)
    {
        return ;
    }

    for(int i=index;i<v.size();i++)
    {
        if(i>index && v[i]==v[i-1])
        continue;

        v1.push_back(v[i]);
        solve(i+1,v,sum-v[i],v1);
        v1.pop_back();
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
    vector<int> v1;
    int sum;
    cin>>sum;
    int sum1;
    solve(0,v,sum,v1);
    for(int i=0;i<ans.size();i++)
        {
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j]<<" ";
    cout<<endl;
    }
}

