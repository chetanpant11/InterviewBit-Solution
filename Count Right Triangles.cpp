#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

int solve(vector<int>&A, int n,vector<int>&B)
{
    unordered_map<int,int> x_axis;
    unordered_map<int,int> y_axis;

    for(int i=0;i<A.size();i++)
        x_axis[A[i]]++;

    for(int i=0;i<B.size();i++)
         y_axis[B[i]]++;

    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        int x_count=x_axis[A[i]];
        int y_count=y_axis[B[i]];
      ans+=(((x_count-1)%mod)*((y_count-1)%mod))%mod;
    }
    return ans%mod;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<1/0;
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    cout<<solve(v,n,v1);
}

