#include <bits/stdc++.h>
using namespace std;
#define ll long long

unsigned ll int ans;
void solve(unsigned ll int n)
{
    int high_bit=31;
    while(n)
    {
        if(n&1)
            ans+=pow(2, high_bit);
        n>>=1;
        high_bit--;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned ll int n;
    cin>>n;
    solve(n);
    cout<<ans;
}
