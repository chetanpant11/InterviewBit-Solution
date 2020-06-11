#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    int j=0,i=0;
    int count=0;
    while( i < n)
    {
        int count = 0;
        while(j < m && b[j] == a[i])
        {
            count++;
            j++;
        }
        if(count == 0)
        {cout<<0;
        }
        i++;
    }
    if(i != n || j != m)
    cout<<0;
    else
    cout<<1;
}


