
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

int solve(vector<int>&v, int n)
{
    int sum=0;
    set<int> s;
    vector<int>a;
    a.insert(a.begin(),0);
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        a.push_back(sum);
    }
    for(int i=0;i<a.size();i++)
    {
        if(s.find(a[i])!=s.end())
            return 1;
        else
            s.insert(a[i]);
    }
    return 0;

}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    //cout<<1/0;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<solve(v,n);
}

