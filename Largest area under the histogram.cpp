#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;


void solve(vector<int>&v, int n)
{
    stack<int> s;
    int ans =INT_MIN;
    int ans2;
    for(int i=0;i<n;)
    {
        int k=v[i];
        if(s.empty()==true||k>=v[s.top()])
        {
            s.push(i);
            i++;
        }
        else
        {
            while(v[i]<v[s.top()]){
            int idx=s.top();
            s.pop();
            if(s.empty()==true)
            {
            ans2=v[idx]*i;
            s.push(i);
            i++;
            }
            else
            {
                ans2=v[idx]*(i-s.top()-1);
            }
            ans=max(ans, ans2);}
        }
    }
    while(!s.empty())
    {
        int id=s.top();
        s.pop();
        if(s.empty()==true)
            {
            ans2=v[id]*v.size();

            }
            else
            {
                ans2=v[id]*(v.size()-s.top()-1);
            }
            ans=max(ans, ans2);
    }
cout<<ans;
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

