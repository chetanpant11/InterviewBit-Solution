#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll int solve(int n)
{
    ll int low=0;
    ll int high=n;
    while(low<=high)
    {
        ll int mid=low+(high-low)/2;
        if(mid*mid==n||mid*mid<n&&(mid+1)*(mid+1)>n)
            return mid;
        else if(mid*mid<n)
            low=mid+1;
        else
            high=mid-1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<solve(n);
}

