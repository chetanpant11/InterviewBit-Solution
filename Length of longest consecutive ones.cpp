#include <bits/stdc++.h>
using namespace std;
int solve(string &s)
{
    int n=s.size();
    vector<int>v(n,0);
    vector<int>v1(n,0);
    int maxi=INT_MIN;
    if(s[0]=='0')
        v[0]=0;
    else
        v[0]=1;

    if(s[n-1]=='0')
        v1[n-1]=0;
    else
        v1[n-1]=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]=='0')
            v[i]=0;
        else
            v[i]=1+v[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]=='0')
            v1[i]=0;
        else
            v1[i]=1+v1[i+1];
    }
    int count=0;
   for(int i=1;i<n-1;i++)
   {
       if(s[i]=='0')
        maxi=max(maxi,v[i-1]+v1[i+1]);
   }
   for(int i=0;i<n;i++){if(s[i]=='1')count++;}
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";}
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
   maxi=max(v[n-2],v1[1]);
   if(count<maxi)
    return count;
   else if(count>maxi)
    return maxi+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int ans=solve(s);
    cout<<ans;
}

