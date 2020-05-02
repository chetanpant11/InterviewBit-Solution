#include <bits/stdc++.h>
using namespace std;
int check(int n,vector<int>&sieve)
{
    if(n==1){
        return 1;
    }
    int factor=sieve[n];
    n=n/factor;
    int count=1;
    int f=1;
    while(n!=1)
    {
        if(factor==sieve[n])
        {
            count++;
        }
        else
        {
            f=f*(count+1);
            count=1;
           factor=sieve[n];
        }
            n=n/factor;
    }

return f*(count+1);
}

vector<int> solve(vector<int>&A)
{
    vector<int> sieve(1000000);
    int l=INT_MIN;
    for(int i=0;i<A.size();i++){
    l=max(A[i],l);
    }
    sieve[0]=1;
    for(int i=1;i<=l;i++){
        sieve[i]=i;
    }
     for(int i=2;i<=sqrt(l);i++){
         for(int j=2;i*j<=l;j++){
             if(sieve[i*j]==i*j)
             {
                 sieve[i*j]=i;
             }
         }
     }
    vector<int>ans;
    for(int i=0;i<A.size();i++){
      ans.push_back(check(A[i],sieve));
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n),ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ans = solve(v);
}
