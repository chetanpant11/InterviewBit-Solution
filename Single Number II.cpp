#include <bits/stdc++.h>
#define ll long long
unsigned long long int mod =1e9+7;

using namespace std;
int ans;
int base = 1;
void make_num(int n)
{
    ans+=n*base;
    base*=2;
}

void solve(vector<int>&v, int n)
{
    for(int i=0;i<32;i++)
    {
        int zero=0;
        int one=0;
        for(int j=0;j<n;j++)
        {
            if((v[j]>>i)&1)
                one++;
            else
                zero++;
        }
        if(one%3!=0)
            make_num(1);
        else
            make_num(0);
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
    solve(v,n);
    cout<<ans;
}
