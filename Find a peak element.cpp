#include <bits/stdc++.h>
#define ll long long
unsigned long long int mod =1e9+7;

using namespace std;
int solve(vector<int>&v, int n)
{
    int i=0;
    int j=n-1;
    if(v[0]>v[0+1])
        return v[0];
    if(v[j]>v[j-1])
        return v[j];
    while(i<=j)
    {
        int mid=i+(j-i)/2;
        if(v[mid-1]<=v[mid]&&v[mid]>=v[mid+1])
            return v[mid];
        else if(v[mid-1]>v[mid])
            j=mid;
        else
            i=mid+1;
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
    cout<<solve(v,n);
}
