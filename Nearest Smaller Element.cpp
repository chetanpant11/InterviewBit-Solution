#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

void solve(vector<int>&v, int n)
{
    stack<int> s;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        while(!s.empty()&&s.top()>=v[i])
            s.pop();
        if(s.empty()==true)
            ans.push_back(-1);
        else
        ans.push_back(s.top());

        s.push(v[i]);
    }
    for(int i=0;i<ans.size();i++)
    {

        cout<<ans[i]<<endl;
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
    solve(v,n);
}

