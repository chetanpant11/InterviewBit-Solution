#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

int solve(vector<int>&A, int n)
{
    long long _max = 0;
  long long _min = 0;

  int N = A.size();

  sort(A.begin(), A.end());

  for (int i=0;i<N;i++) {
    _min = (_min*2) % 1000000007;
    _min = (_min + A[i]) % 1000000007;
  }
  for (int i=N-1;i>=0;i--) {
    _max = (_max*2) % 1000000007;
    _max = (_max + A[i]) % 10000000000007;
  }

  long long ans = ( _max - _min + 1000000007 ) % 1000000007;
  return ans;
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

