#include <bits/stdc++.h>
using namespace std;
#define ll long long
unsigned long long int mod =1e9+7;

int solve(int n)
{
    int l=0;
    int h=n;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(mid*(mid+1)/2<=n &&(mid+1)*(mid+2)/2>n)
            return mid;
        else if(mid*(mid+1)/2>n)
            h=mid-1;
        else
        l = mid+1;
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

