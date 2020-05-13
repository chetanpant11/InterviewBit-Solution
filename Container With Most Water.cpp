#include <bits/stdc++.h>
using namespace std;
unsigned long long int M=1e9+7;
int solve(vector<int>&v, int n)
{
    long long int ans=0;
    long long int i=0,j=v.size()-1;
    while(i<j)
    {
        long long int count1;
        count1=((j-i)%M*min(v[i],v[j])%M)%M;
        ans=max(ans, count1);
        if(v[i]<v[j])
        i++;
        else
        j--;
    }

return ans%M;

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
    cout<<solve(v,n);
}

