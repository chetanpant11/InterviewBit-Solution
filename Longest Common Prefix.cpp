#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

string solve(vector<string>&v, int n)
{
    int mini=INT_MAX;
    string k;
    for(int i=0;i<n;i++)
    {
        if(v[i].size()<mini)
           {
            k=v[i];
            mini=v[i].size();
           }
    }
    string ans="";
    for(int i=0;i<k.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[j][i]!=k[i])
            {
                return ans;
            }
        }
        ans+=k[i];
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<1/0;
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<solve(v,n);
}

