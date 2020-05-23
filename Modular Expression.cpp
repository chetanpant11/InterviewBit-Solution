#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ans=0;

int solve(int a, int b, int c)
{
    cout<<b<<endl;
    if(b==0)
        return 1;

    ll int y=0;
    if(!b&1)
    {
        y=solve(a,b/2,c);
         y=(y*y)%c;
    }
    else{
        y=a%c;
        y=(y*solve(a,b-1,c))%c;
    }
    return (int)((y + c) % c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<solve(a,b,c);

}

