#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

int solve(vector<int>&v, int n,int b)
{
    sort(v.begin(), v.end());
    int sum=0;
    int k=0;
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(k<b)
        {
            m+=v[i];
            k++;
        }
        sum+=v[i];
    }
  if(b==0)
  return sum;

  int c=0;
  int l=0;
  for(int i=v.size()-1;i>=0;i--)
  {
      if(c<b){
      l+=v[i];
      c++;
      }
  }

  int m1=sum-2*m;
  int m2=2*l-sum;
  return max(m1, m2);
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
    int b;
    cin>>b;
    cout<<solve(v,n,b);
}

