#include <bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &v)
{
    int f=1;
    v.insert(v.begin(),0);
    int n=v.size();
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==9)
        {
            if(f==1){
                v[i]=0;
                f=1;
            }
        }
        else
        {
        v[i]+=f;
        f=0;
        }
    }
        int save=0;
        int j=0;
        while(v[j]==0)
        {save++;
        j++;}

        for(int i=save;i<v.size();i++)
            ans.push_back(v[i]);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    //cout<<n;
    vector<int> v(n),ans;
    for(int i=0;i<n;i++)
        cin>>v[i];

    ans=solve(v);
    for(auto i:ans)
    cout<<i;
}


