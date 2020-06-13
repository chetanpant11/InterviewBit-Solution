#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

int solve(vector<int>&v,vector<int>&v1, int n)
{
    int a=accumulate(v.begin(), v.end(), 0);
    int b=accumulate(v1.begin(), v1.end(),0);
    if(b>a)
        return -1;

    else
    {
        int sum=0, diff=0,idx=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i]-v1[i];
            if(sum<0)
            {
                idx=i+1;
                diff=sum;
                sum=0;
            }
        }
       return idx;
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
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    cout<<solve(v,v1,n);
}

