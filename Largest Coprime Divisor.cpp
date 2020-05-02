#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}
int solve(int a, int b)
{
    if(a==1)
        return a;
    while(gcd(a,b)!=1)
    {
        a=a/gcd(a,b);
    }
    return a;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int ans=solve(a,b);
    cout<<ans;
}

