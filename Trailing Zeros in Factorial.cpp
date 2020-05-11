#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int count=0;
    while(n)
    {
      count+=n/5;
      n=n/5;
    }
    cout<<count;
}

