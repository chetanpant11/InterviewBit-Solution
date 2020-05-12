#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&v, int n, int k)
{
    int ans=0;
    int i=0, j=n-1;
    while(i<=j)
    {
        if(v[i]*v[j]<k){
            ans+=(j-i)*2+1;
            i++;}
        else
            j--;
      //  cout<<ans<<" ";
    }
    //cout<<endl;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>k;
    cout<<solve(v, n, k);
}
