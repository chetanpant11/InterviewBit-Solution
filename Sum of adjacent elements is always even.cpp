#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &v){
    int s=v.size();
    int countE=0;
    int countO=0;
    for(int i=0;i<s;i++)
    {
      if(v[i]%2==0)
            countE++;
      else
        countO++;
    }
    if(countE<countO)
        return countE;
    else
        return countO;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    int ans;
    for(int i=0;i<n;i++)
        cin>>v[i];
    ans=solve(v);
    cout<<ans;
}
