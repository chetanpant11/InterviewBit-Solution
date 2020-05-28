#include <bits/stdc++.h>
using namespace std;
#define ll long long

int match(string k, int n)
{
    int rem=0;
    for(int i=0;i<k.size();i++)
    {
        rem=rem*10+(k[i]-'0');
        rem%=n;
    }
    return rem;
}

string solve(ll int n)
{
    queue<string> q;
    q.push("1");
    while(q.empty()!=true)
    {
        string k=(q.front());
        q.pop();

        int a=match(k,n);
        if(a==0)
            return k;
        else
        {
           q.push(k+"0");
           q.push(k+"1");
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
    cout<<solve(n);

}

